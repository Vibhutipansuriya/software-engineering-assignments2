# Wriet a Python to count the number of strings where the string length is 2 or more 
# and the first and last character are same from a given list of strings.

def check_string(str):    # definition to check the string length
    count=0
    for s in str:
        if len(s)>1 and s[0]==s[-1]:
            count+=1
    
    return count    # return the length of the list

list = ['Vibhuti', 'Morning', 'evening', 'Sky', 'render', '100', '1005', 'treat']  # list 

# printing the first and last character are same from a given list of strings.

print("The first and last character are same from a given list of strings are  :  ", check_string(list))
