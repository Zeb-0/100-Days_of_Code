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

### Creating Processes - `fork`
`fork() - creates a new child process almost identical to the parent
- on successful return 2 processes continue to run the same program but with different stacks, data and heaps.

### Wait - `wait()`
It suspends execution of the caling process until one of its children terminates.
---

# DAY 17 - 100-Days_of_code

### Fork + Wait + Execve

Tried to combine fork, wait and execve system calls to list all files in aa directory.

suppossed to do it in 5 instances/ child processes.

- did the code - the code is fine
- faled to list the files though.

**Gotta work on PATH implementation**
---

# DAY 18 - 100-Days_of_code

### Super Simple Shell.

- the objective here is to write a simple shell using all the above knowledge.
