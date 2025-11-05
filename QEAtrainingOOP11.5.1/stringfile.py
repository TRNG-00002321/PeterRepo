print(dir(str))

text = " Hello World! "
print(text)
#lower
#upper
#strip
#lstrip
#rstrip
#replace
#split
#join
#find
#index


#lower and upper change case
ltext = text.lower()
utext = text.upper()
print(ltext)
print(utext)

#strip removes trailiong and leading characters
striptext = text.strip()
print(striptext + "&")

#only removes leading
lsttext = text.lstrip()
print(lsttext + "&")

#only removes trailing
rsttext = text.rstrip()
print(rsttext + "&")

#replace finds substring and subtitutes it
replaced = text.replace("World", "Friend")
print(replaced)

#split separates into many based on a character
#that character is removed in the process
split = text.split("o")
print(split)

#join connects strings, leading string is placed inbetween each value of a string iterable
conc = "o".join(split)
print(conc)

#find locates index of a substring
ind = text.find("Wo")
print(ind)
#returns -1 if nothing is found
ind = text.find("q")
print(ind)

#index shows what is at that index
char = text.index("Wo")
print(char)
#unlik find it does not return -1
#this line of code would nto execute
# char = text.index("q")
