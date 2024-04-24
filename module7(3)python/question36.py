"""
How Do You Traverse Through A Dictionary Object In Python?
"""
statesAndCapitals = {
'Gujarat': 'Gandhinagar',
'Maharashtra': 'Mumbai',
'Rajasthan': 'Jaipur',
'Bihar': 'Patna'
}
print('List Of given capitals:\n')
for capital in statesAndCapitals.values():
 print(capital)