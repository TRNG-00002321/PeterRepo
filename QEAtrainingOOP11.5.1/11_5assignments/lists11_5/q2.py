"""

You are given a number k and a list arr[] that contains integers.
You need to return list of numbers that are less than k.
Example
Input: arr[] = [54, 43, 2, 1, 5], k = 6
Output: 2 1 5
Explanation: 2 1 5 are less than 6.

"""


def lessList(ls = [], k = 0):
    retls = [x for x in ls if (x < k)]
    # retls = []
    # for i in ls:
    #     if i < k:
    #         retls.append(i)
    return retls


ls = [54, 43, 2, 1, 5]
k = 6
print(lessList(ls, k))