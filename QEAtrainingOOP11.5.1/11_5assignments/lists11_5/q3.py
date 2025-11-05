"""

You are given a list arr that contains integers. You need to return
average of the non negative integers.
Examples:
Input: arr = [-12, 8, -7, 6, 12, -9, 14]
Output: avg = 10.0
Explanation: The non negative numbers are 8 6 12 14. The sum is 8+6+12+14 = 40,
Average = 40/4 = 10.0


"""

def possum(ls):
    pos = [x for x in ls if (x > 0)]
    return (sum(pos)/len(pos))

arr = [-12, 8, -7, 6, 12, -9, 14]
print(possum(arr))

