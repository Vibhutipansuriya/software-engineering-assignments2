def char_frequency(str1):
    char_dict = {}
    for char in str1:
        if char in char_dict:
            char_dict[char] += 1
        else:
            char_dict[char] = 1
    return char_dict

input_string = "vibhuuti paansuriya"
result = char_frequency(input_string)
print("Character frequencies in vibhuuti paansuriya:")
print(result)