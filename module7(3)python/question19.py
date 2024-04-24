"""
What is tuple? Difference between list and tuple.

Tuple:
A tuple is an immutable data structure in Python.
It represents an ordered collection of elements.
Tuples are created using parentheses ( ).
Once a tuple is created, its elements cannot be modified.
Tuples are generally used for fixed data, such as coordinates, database records, or function return values.
Example: (10, 20, 30) is a tuple.


There are some diferences between list and tuple.
Mutability:
Lists are mutable; you can change their elements after creation.
Tuples are immutable; once created, their elements cannot be modified.

Memory Usage:
Lists consume more memory due to their dynamic nature.
Tuples consume less memory because they are static and fixed.

Performance:
Iterating over a tuple is generally faster than iterating over a list.
Lists are better for operations like insertion and deletion, while tuples are better for accessing elements.

Built-in Methods:
Lists have several built-in methods (e.g., append, pop, sort).
Tuples have fewer built-in methods.

Error-Prone:
Lists are more error-prone due to their mutability.
Tuples are less error-prone because they don’t change.
"""