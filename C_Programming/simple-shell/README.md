# DAy 15 - 100-Days_of_code

## Relearning Simple Shell

#### Process Id (PID) - an instance of an executing program
can be retrieved using:
- getpid()
- getppid() - for the parent id.

`INT_MAX` - gets the max process id there is.

### Arguments
Revising on `argc` and `argv`

---
# DAY 16 - 100-Days_of_code

### Getline function
Prompts user for input, and prints back on stdout.
---

### STRTOK
**Syntax:**
- `char *strtok(char *str, const char *delimiters);`

Breaks a string into a seq of zero/nonempty tokens.
- Tokens are basically smaller parts of the string.

It returns a pointer to 1st character of each token found in the input string.
#### Usage:
- on 1st call:
    * `*str` should be the input string
- Subsequent call:
    * the argument should be `NULL`

### Executing a program - EXECVE

`Execve` - Is a system call that allows a process to execute another program.
- It loads the new program into the current process' memory in place of prev program
- On success it does not return to resume the rest of prev program
