def string_ends(str):
    if len(str) < 2:
       
        return ''

    return str[0:2] + str[-2:]

print(string_ends('vibhutipansuriya')) 
print(string_ends('a1'))       
print(string_ends('a'))           