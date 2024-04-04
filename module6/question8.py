letter = input("Input a letter of the alphabet: ")

# Check if the input letter is present in the set of vowels
vowels = {'a', 'e', 'i', 'o', 'u'}
if letter.lower() in vowels:
    print(f"{letter} is a vowel.")
else:
    print(f"{letter} is not a vowel.")