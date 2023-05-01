# DAY 004

## Malloc and Free

### Learning objectives:
- What is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when use `malloc`
- How to use `valgrind` to check for memory leak

## Resources:
#### Read or Watch -
- [0x0a - malloc & free - quick overview.pdf](https://intranet.alxswe.com/rltoken/7q6RmWq86XkUhvmlhrg9bg)
- [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](https://www.youtube.com/watch?v=xDVC3wKjS64)

**man or help:**
- malloc
- free

### Dynamic memory allocation

Is a feature that allows allocation and deallocation of memory during runtime.

uses `malloc()` function
- it allocates bytes and returns a pointer to the allocted memory.

`free()`
- frees memory space pointed to by the pointer returned by `malloc()`, `calloc()` or `realloc()`.
---

# Tasks
---

File Name | Prototype | File Description|
---|---|---|
| 0-create_array.c | `char *create_array(unsigned int size, char c);` | creates an array of chars and initializes it witha specific char|
| | | Returns pointer to the array|
| | | Returns `NULL` if size = `0`|
| 1-strdup.c | `char *_strdup(char *str);` | returns a pointer to a newly allocated space in memory|
| | | the new string is a duplicate of the string `str`|
| | | Returns `NULL` if str = NULL or insufficient memory|
