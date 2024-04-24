"""Write a Python function that checks whether a passed string is
palindrome or not"""
def isPalindrome(s):
    return s == s[::-1]
 
s = "racecar"
ans = isPalindrome(s)
 
if ans:
    print("Yes")
else:
    print("No")