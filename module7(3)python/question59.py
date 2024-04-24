"""Write a Python program to read a random line from a file."""


import random 
  
with open("MyFile.txt", "r") as file: 
    allText = file.read() 
    words = list(map(str, allText.split())) 
   
    print(random.choice(words)) 