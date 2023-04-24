# DAY 3

**Third day of my 100 days of code challenge**

## C - argc, argv

Learning a few things on argument count and argument vectors

### Learning Objectives:
- How to use arguments passed to your program
- What are two prototypes of `main` that you know of, and in which case do you use one or the other
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

### Resources:
- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- how to compile with unused variables

## Tasks

File Name | File Description|
---|---
| 0-whatsmyname.c | a program that prints its name|
| | on renaming it, it should print the new name without having to compile it|
| 1-args.c | A program that prints the number of arguments passed to it|
| | it should print a number followed by a new line|
| 2-args.c | It prints all arguments it receives, one argument per line|
| 3-mul.c | Multiplies 2 numbers and return result |
| | if no arguments are given it prints `Error` followed by new line and returns `1`|
| 4-add.c | Adds two positive numbers(of type `int`)|
| | passing no arguments it prints `0` and new line|
| | passing non-digits prints `Error`, new line and returns `1`|
| 100-change.c | prints the minimum number of coins to make change for an amount of money.|
| | Usage: `./change cents`  - `cents` ~ amount of cents to give back|
| | pass only one argument otherwise prints `Error`, neww line and returns `1`|
| | use `atoi` to parse parameter passed to the program|
| | passing negative number of arguments it prints `0` and new line
| | use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent|
