-- Parking Lot*******
-- *                *
-- *                *
--- *****************

-- SETUP:
-- Create a database server (docker)
-- $ docker run --name some-postgres -e POSTGRES_PASSWORD=mysecretpassword -p 5432:5432 -d postgres 
--In our case it is MySQL
-- Connect to the server (Azure Data Studio / Database extension)
-- Test your connection with a simple query (like a select)
-- Execute the Chinook database (from the Chinook_pg.sql file to create Chinook resources in your server)

SELECT * FROM Artist;

-- Comment can be done single line with --
-- Comment can be done multi line with /* */

/*
DQL - Data Query Language
Keywords:

SELECT - retrieve data, select the columns from the resulting set
FROM - the table(s) to retrieve data from
WHERE - a conditional filter of the data
GROUP BY - group the data based on one or more columns
HAVING - a conditional filter of the grouped data
ORDER BY - sort the data
*/



-- BASIC CHALLENGES
-- List all customers (full name, customer id, and country) who are not in the USA
Select CONCAT (`FirstName`, " " , `LastName`), `CustomerId`, `Country` FROM `Customer` WHERE NOT `Country` LIKE "USA";

-- List all customers from Brazil
Select CONCAT (`FirstName`, " " , `LastName`), `CustomerId`, `Country` FROM `Customer` WHERE `Country` LIKe "Brazil";

-- List all sales agents
-- SELECT * FROM employee WHERE title LIKE '%Agent%;
Select CONCAT (`FirstName`, " " , `LastName`) FROM `Employee` WHERE title LIKE "%Agent%";

-- Retrieve a list of all countries in billing addresses on invoices
SELECT DISTINCT `BillingCountry` FROM `Invoice`


-- Retrieve how many invoices there were in 2021, and what was the sales total for that year?
SELECT COUNT(total) as transactions, SUM(total) as `Sales Total` , EXTRACT(year from InvoiceDate) as year FROM `Invoice` GROUP BY year HAVING year = 2021


-- (challenge: find the invoice count sales total for every year using one query)
SELECT YEAR(`InvoiceDate`) as year, COUNT(total) as transactions, SUM(total) as `Sales Total` FROM `Invoice` GROUP BY year



-- how many line items were there for invoice #37
SELECT COUNT(total) as Items FROM `Invoice` WHERE `InvoiceId` = 37;


-- how many invoices per country? BillingCountry  # of invoices -
-- Retrieve the total sales per country, ordered by the highest total sales first.
SELECT `BillingCountry`, COUNT(`BillingCountry`) as Count FROM `Invoice` GROUP BY `BillingCountry` ORDER BY COUNT DESC;

-- JOINS CHALLENGES
-- Every Album by Artist
SELECT `Name`, `Title` FROM Album join Artist on (Album.`ArtistId` = Artist.`ArtistId`)

-- (inner keyword is optional for inner join)
-- All songs of the rock genre
SELECT Track.Name, Track.`Composer` FROM Track JOIN `Genre` ON Track.`GenreId` = `Genre`.`GenreId` WHERE Genre.name LIKE "ROCK";



-- Show all invoices of customers from brazil (mailing address not billing)
SELECT CONCAT(c.`FirstName`, " ", c.`LastName`) as FullName, `InvoiceDate` FROM `Customer` as c JOIN `Invoice` as i ON i.`CustomerId` = c.`CustomerId` WHERE c.`Country` LIKE "Brazil";

-- Show all invoices together with the name of the sales agent for each one
SELECT CONCAT(e.`FirstName`, " ", e.`LastName`) as fullname, i.`InvoiceDate`, i.`InvoiceId`, i.`Total` FROM 
`Employee` as e JOIN `Customer` as c ON c.`SupportRepId` = e.`EmployeeId` JOIN `Invoice` as i 
ON i.`CustomerId` = c.`CustomerId` WHERE e.title LIKE "%agent%"

-- Which sales agent made the most sales in 2021?
SELECT CONCAT(e.`FirstName`, " ", e.`LastName`) as fullname, COUNT(*) as transactionCount FROM 
`Employee` as e JOIN `Customer` as c ON c.`SupportRepId` = e.`EmployeeId` JOIN `Invoice` as i  
ON i.`CustomerId` = c.`CustomerId` WHERE YEAR(`InvoiceDate`) = 2021 GROUP BY e.`EmployeeId` ORDER BY transactionCount DESC LIMIT 1 

-- How many customers are assigned to each sales agent?
SELECT CONCAT(e.`FirstName`, " ", e.`LastName`) as fullname, COUNT(*) FROM 
`Employee` as e JOIN `Customer` as c ON c.`SupportRepId` = e.`EmployeeId` 
WHERE e.title LIKE "%agent%" GROUP BY e.`EmployeeId`

-- Which track was purchased the most in 2024?
SELECT t.name, COUNT(*) as purchaseCount FROM Invoice as i JOIN 
`InvoiceLine` as l ON i.`InvoiceId` = l.`InvoiceId` JOIN `Track` as t ON l.`TrackId` = t.`TrackId` 
WHERE YEAR(i.`InvoiceDate`)  = 2024 GROUP BY t.`Name` ORDER BY purchaseCount DESC LIMIT 1;

-- Show the top three best selling artists.
Select a.`Name`, COUNT(*) as TotalSold FROM `Track` as t
JOIN `InvoiceLine` as l on t.`TrackId`=l.`TrackId` JOIN Album as b 
ON b.`AlbumId` = t.`AlbumId` JOIN `Artist` as a ON a.`ArtistId` = b.`ArtistId`
GROUP BY a.`Name` ORDER BY TotalSold DESC Limit 3

-- Which customers have the same initials as at least one other customer?


-- Which countries have the most invoices?


-- Which city has the customer with the highest sales total?


-- Who is the highest spending customer?


-- Return the email and full name of of all customers who listen to Rock.


-- Which artist has written the most Rock songs?


-- Which artist has generated the most revenue?




-- ADVANCED CHALLENGES
-- solve these with a mixture of joins, subqueries, CTE, and set operators.
-- solve at least one of them in two different ways, and see if the execution
-- plan for them is the same, or different.

-- 1. which artists did not make any albums at all?


-- 2. which artists did not record any tracks of the Latin genre?


-- 3. which video track has the longest length? (use media type table)




-- 4. boss employee (the one who reports to nobody)


-- 5. how many audio tracks were bought by German customers, and what was
--    the total price paid for them?



-- 6. list the names and countries of the customers supported by an employee
--    who was hired younger than 35.




-- DML exercises

-- 1. insert two new records into the employee table.

-- 2. insert two new records into the tracks table.

-- 3. update customer Aaron Mitchell's name to Robert Walter

-- 4. delete one of the employees you inserted.

-- 5. delete customer Robert Walter.