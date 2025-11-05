"""

Given a string s, you need to reverse it.
"""


def reverse(s):
    rs = []
    for i in s:
        rs.insert(0, i)
    return("".join(rs))


string = "howdy there!"
print(reverse(string))