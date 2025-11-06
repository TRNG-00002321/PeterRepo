"""

Map Assignment

1. Convert Celsius to Fahrenheit: Given a list of temperatures in Celsius,
use map() to convert them to Fahrenheit.
The formula is F = (C * 9/5) + 32.
Example
    celsius_temps = [0, 10, 20, 30]
    # Expected output: [32.0, 50.0, 68.0, 86.0]

2. Capitalize a List of Names: Given a list of names, use map() to return a new list where
each name is capitalized.
Example
    names = ["alice", "bob", "charlie"]
    # Expected output: ["Alice", "Bob", "Charlie"]

3. Add Corresponding Elements: Given two lists of numbers of the same length, use map() to
return a new list containing the sum of corresponding elements.
Example
	list1 = [1, 2, 3]
    list2 = [4, 5, 6]
    # Expected output: [5, 7, 9]

4. Concatenate Strings: Given two lists of strings, use map() to concatenate corresponding
elements with a space in between.
Example
    first_names = ["John", "Jane"]
    last_names = ["Doe", "Smith"]
    # Expected output: ["John Doe", "Jane Smith"]

5. Apply a Custom Function: Define a function that takes a string and returns its length.
Then, use map() to apply this function to a list of strings, returning a list of lengths.
Example
    words = ["apple", "banana", "cherry"]
    # Expected output: [5, 6, 6]

"""

def cel_to_fahr(degr: []):
    fahr = list(map(lambda x: (9 / 5 * x) + 32, degr))
    return fahr

def upper_first(names: []):
    cappd =  list(map(lambda x: x[0].upper() + x[1:], names))
    return cappd

def arr_add(arr1: [], arr2: []):
    added = list(map(lambda x, y: x + y, arr1, arr2))
    return added

def str_add(sl1: [], sl2: []):
    added = list(map(lambda x, y: x + " " + y, sl1, sl2))
    return added

def str_len(sl1: []):
    lengths = list(map(lambda x: len(x), sl1))
    return lengths

if __name__ == "__main__":
    print("hi")
    celc = [0, 10, 20, 30]
    print("celcius array to fahrenheit", celc, cel_to_fahr(celc))

    names = ["alice", "bob", "charlie"]
    print("names changes: ", names, upper_first(names))

    list1 = [1, 2, 3]
    list2 = [4, 5, 6]
    print("adding lists: ", list1, list2, ", summed: ", arr_add(list1, list2))

    first_names = ["John", "Jane"]
    last_names = ["Doe", "Smith"]
    print("separate names: ", first_names, last_names,
          ", concat: ", str_add(first_names, last_names))

    words = ["apple", "banana", "cherry"]
    print("words: ", words, ", lengths: ", str_len(words))
