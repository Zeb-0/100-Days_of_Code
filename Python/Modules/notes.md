# Modules
A module is a file containing Python definitions and statements.
- the file name is the module's name with `.py` suffix
- the modules name is available as the value of the global var `__name__`

A module can also contain executable statements as well as func. definitions for initializing the module.
- Are executed only the first time the mod name is encountered in the import statement
- Are run is the file is executed as a script.

- Each module has its own private `namespace` used as the `global namespace` by all functions defined in it.
* Modules can import other modules.

---

# Import

- Is a statement used to including/make available eternal modules/packages in your code.

## variations of Import
* `import` module_name
* `import` module_name `as`
* `from` module/package_name `import`
* `from` module/package_name `import` name `as`

---

## Executing modules as Scripts

- Running a python file with `python fibo.py <arguments>` causes the code to be executes as it were imported.
**to run it as a script and make it usable as an importable module use:**
```
if __name__ == "__main__":
    import sys
    fib(int(sys.argv[1]))
```
Importing the module won't execute the code.

Used to provide convenient user interface to a module also for testing purposes.
---

# __pycache__

Is a directory for storing the compiled versions of the modules in cache format.
- the catched modules are named as: `module.versio.pyc`.

---

# Standard Modules
Python comes with a library of modules usually described in a separate document - **Library Reference**.
xample is the `sys` module.
---

# dir()

Is a built-in function
- used for finding out the names contained in a module.
- returns a sorted list of strings
 ### Usage:
    - `dir(module_name)`
if no arguments are given it lists all the currently defined names of `variables`, `modules`, `functions` etc.
---

# Packages
Are a way of structuring Python's module namespace by using `dotted module names`.
Also a collection of modules.
For python to treat directories as packages, `__init__.py` files are needed

An example showing usage is: 
    - `import sound.effects.echo`
    - `from sound.effects import echo`
