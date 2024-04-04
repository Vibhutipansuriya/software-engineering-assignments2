"""According to the Python memory management documentation, Python has a private heap that stores our program’s objects and data
 structures. Python memory manager takes care of the bulk of the memory management work and allows us to concentrate on our code.

Types of memory allocation
There are two types of memory allocation in Python, static and dynamic.

1. Static memory
The stack data structure provides static memory allocation, meaning the variables are in the stack memory. Statically assigned
variables, as the name implies, are permanent; this means that they must be allocated in advance and persist for the duration of the
program. Another point to remember is that we cannot reuse the memory allocated in the stack memory. Therefore, memory reusability 
is not possible.
for example

x = 20
y = [] 
z = "" 

2. Dynamic memory
The dynamic memory allocation uses heap data structures in its implementation, implying that variables are in the heap memory. As the
name suggests, dynamically allocated variables are not permanent and can be changed while a program is running. Additionally, allotted
memory can be relinquished and reused. However, it takes longer to complete because dynamic memory allocation occurs during program
execution. Furthermore, after utilizing the allocated memory, we must release it. Otherwise, problems such as memory leaks might arise.

for example
x = [0]*3

"""