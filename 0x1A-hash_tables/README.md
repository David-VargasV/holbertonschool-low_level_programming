# 0x1A. C - Hash tables
***
![image](https://user-images.githubusercontent.com/98335124/172250696-4bd006e8-2f41-4e2b-9782-e59c5e44edb5.png)
***

## Learning
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

In computing, a hash table, also known as hash map, is a data structure that implements a set abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found. During lookup, the key is hashed and the resulting hash indicates where the corresponding value is stored.

Ideally, the hash function will assign each key to a unique bucket, but most hash table designs employ an imperfect hash function, which might cause hash collisions where the hash function generates the same index for more than one key. Such collisions are typically accommodated in some way.

In a well-dimensioned hash table, the average time complexity for each lookup is independent of the number of elements stored in the table. Many hash table designs also allow arbitrary insertions and deletions of key–value pairs, at amortized constant average cost per operation.
***

## Requirements
***

### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don’t forget to push your header file
* All your header files should be include guarded
***

## Tasks
0. ht = {} - Write a function that creates a hash table.
1. djb2 - Write a hash function implementing the djb2 algorithm.
2. key -> index - Write a function that gives you the index of a key.
3. ht['betty'] = 'cool' - Write a function that adds an element to the hash table.
4. ht['betty'] - Write a function that retrieves a value associated with a key.
5. print(ht) - Write a function that prints a hash table.
6. del ht - Write a function that deletes a hash table.
***
