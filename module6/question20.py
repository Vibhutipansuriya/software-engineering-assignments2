a = ["vibhuti", "pansuriya", "tanish", "hardik"]

max_length = len(a[0])
longest_word = a[0]

for word in a:
    if len(word) > max_length:
        max_length = len(word)
        longest_word = word

print(f"The word with the longest length is: {longest_word} and length is {max_length}")