Structures, typedef

A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).

The C struct directly references a contiguous block of physical memory, usually delimited (sized) by word-length boundaries. It corresponds to the similarly named feature available in some assemblers for Intel processors. Being a block of contiguous memory, each field within a struct is located at a certain fixed offset from the start.

Tasks

0. Define a new type struct dog with the following elements: name, type = char *
                                                             age, type = float
							     owner, type = char *
1. Write a function that initialize a variable of type struct dog.
2. Write a function that prints a struct dog.
3. Define a new type dog_t as a new name for the type struct dog.
4. Write a function that creates a new dog.
5. Write a function that frees dogs.
