"""

Given a string s, you need to check if it is palindrome or not.
A palidrome is a string that reads the same from front and back.

"""


def palindromeCheck(s):
    # hlen = len(s)//2
    s1 = s[::-1]
    # print(s1, s2)
    if s1 == s:
        return True
    return False
    # return(True)

string = "racecar"
if(palindromeCheck(string)):
    print(f"{string} is a palindrome")
else:
    print(f"{string} is not palindrome")