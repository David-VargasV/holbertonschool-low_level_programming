Malloc, free

Automatic and dynamic allocation, malloc and free
The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

Automatic allocation
When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.

Tasks.

0. Write a function that creates an array of chars, and initializes it with a specific char.
1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2. Write a function that concatenates two strings.
3. Write a function that returns a pointer to a 2 dimensional array of integers.
4. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
