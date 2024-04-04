def reverse_string(str1):
    ''' Check if the length of the input string 'str1' is divisible by 4 with no remainder.'''
    if len(str1) % 4 == 0:
        '''If the length is divisible by 4, reverse the characters in 'str1' and join them together.'''
        return ''.join(reversed(str1))
    ''' If the length of 'str1' is not divisible by 4, return 'str1' as it is'''
    return str1

print(reverse_string('vibhuti'))  
print(reverse_string('parv')) 