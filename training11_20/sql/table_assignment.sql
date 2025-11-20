/*
SQL Assignment
Peter McGuinness

*/


--completely erase a table and its architecture
DROP TABLE IF EXISTS classification;
DROP TABLE IF EXISTS animals;


-- This is not the comprehensive taxonomic pyramid because that would be too much research
CREATE TABLE classification(
    id int PRIMARY KEY AUTO_INCREMENT,
    phylum_p varchar(255) NOT NULL,
    family_p varchar(255) NOT NULL
);


--our foreign key will NOT be a cascade delete BECAUSE relationhip type is 1:n
--legs are in animal due to granularity; because some species have more or less than their order dictates
CREATE table animals(
    id int PRIMARY KEY AUTO_INCREMENT,
    name varchar(255),
    legs int NOT NULL,
    class_id int REFERENCES classification(id)
);

--create some data
--first insert into classification since class_id references

INSERT INTO classification (phylum_p, family_p) VALUES
    ("Arthropoda", "Portunidae"),
    ("Chordata", "Canidae"),
    ("Chordata", "Ursidae"),
    ("Cnidaria", "Cyaneidae"),
    ("Onycophora", "Peripatidae")


INSERT INTO animals (name, legs, class_id) VALUES
    ("Blue Crab", 10, 1),
    ("Red Fox", 4, 2),
    ("Brown Bear", 4, 3),
    ("Polar Bear", 4, 3),
    ("Lion's Mane Jellyfish", 0, 4),
    ("Epiperipatus adenocryptus", 54, 5),
    ("Plicatoperipatus jamaicensis", 86, 5)


SELECT * FROM animals;
--some of these animals have variable leg counts depending on gender and age. change legs to max so it's always clear
ALTER Table animals rename column legs to max_legs;

--this animal had the leg count listed as a common amount, update that to max to reflect the table alteration
UPDATE animals SET max_legs = 60 WHERE name = "Epiperipatus adenocryptus";

--delete all animals with less than 3 legs
DELETE FROM animals WHERE max_legs < 3;

--fully delete all ROWS in animals, but leaving the structure intact
TRUNCATE table animals;


