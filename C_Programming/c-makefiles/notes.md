# DAY 32 - 100-Days_of_Code

## Make utility and Makefile
**Make utility**
- is a software tool for managing and maintaining computer programs consisting of many component filles.
- it automatically determines which pieces of a large program need recompiling and issus a command to do so.

** Make**
- reads instructions from `Makefile` by default.

**MAkefile** 
- also known as the `descriptor file`.
- a set of rules to determine which parst of a program need recompiling and issue a command to recompile them.
- is a way of automating software building procedure and other complex tasks with dependencies
- contains the following rules:
    * dependency,
    * macros,
    * suffix/implicit rules.

### Dependencies
files used as input to create `targets`.
- **target** 
    - is a name of a file e.g: executableor object file.
    - can also be name of an action e.g clean.
- **command** - in a rule is interpreted by a shel to be executed. e.g `make`

### Macros
Are shortcuts that allow one to replace a longer piece of code with a shorter one

Definitions take the form:
- `NAME = text string`: e.g - CC=g++
are useful for avoiding repeating text entries and also make it easier to modify `makefile`.

Are referred to by placing the name in either `()` or `{}` and preceding with a `$` sign :
- $(CC) main.o factorial.o hello.o -o prog

Are of two categories:
- Internal 
- Special

1. **Internal Macros**
- Are predefined in `make`.
- e.g `make -p` -  to display a listing of all the macros, suffix rules and targets in effect for the current build.

2. **Special Macros**
- Have a specific purpose/significance beyond just replacing code.
- They encapsulate complex tasks or operations in a concise and understandable way.
- Are predefined by the programming language r libs you are using.
    - Example:
        - The macro `@` evaluates to the name of the current target.
        - E.g. 
        - `prog1 : $(objs)`
            - `$(CXX) -o @ $(objs)`
        - is equivalent to 
            - `prog1 : $(objs)`
                * `$(CXX) -o prog1 $(objs)`

### Suffix rules
- Are ways `make` can apply to define default rulles or implicit rules.
- Are double and singlw suffix
- Suffix rules are obsolete. Use pattern rule - a rule that contains char `%`
- **Doubles-suffix** - are defined by sourcesuffix and target suffix. 

### command line macros
- defined on the commandline
    - `make DEBUD_FLAG=-g`

## How Does Make Work?
- The make utility compares the modification time of the target file with the modification times of the dependency files. Any dependency file that has a more recent modification time than its target file forces the  target file to be recreated.  
- By default, the first target file is the one that is built. Other targets are checked only if they are dependencies for the first target.
- Except for the first target, the order of the targets does not matter. The make utility will build them in the order required.

Example:

```# This is a comment line  CC=g++  # CFLAGS will be the options passed to the compiler.  CFLAGS=-c –Wall OBJECTS  = main.o hello.o factorial.o all: prog   prog: $(OBJECTS)  $(CC) $(OBJECTS)  -o prog   %.o:  %.cpp   $(CC) $(CFLAGS)  $<   clean:   rm -rf  *.o ```

## for reference check:
- [Makefile](http://www.gnu.org/software/make/manual/html_node/)