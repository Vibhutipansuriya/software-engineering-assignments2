def modify_string(input_string):
    if len(input_string) < 3:
        return input_string
    elif input_string.endswith("ing"):
        return input_string + "ly"
    else:
        return input_string + "ing"

user_input = input("Enter a string: ")
result = modify_string(user_input)
print(f"Modified string: {result}")