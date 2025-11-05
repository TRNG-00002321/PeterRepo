"""

Given a string s, and a pattern p. You need to find if p exists in s
or not and return the starting index of p in s. If p does not exist in s then -1 will be returned.
Here p and s both are case-sensitive.

Examples:
Input: s = "Hello", p = "llo"
Output: 2
Explanation: llo starts from the second index in Hello.
"""


def findpattern(s: str,  p: str):
    index = 0
    mind = 0
    matching = ""
    for i in s:
        index += 1
        matching += i
        while len(matching) >= 0 and matching not in p:
            matching = matching[1:]
        if matching == p:
            return index - len(matching)

    return -1

print(findpattern("Hello there mate", "there"))
print(findpattern("Hello", "llo"))
print(findpattern("Hello there mate", "q"))