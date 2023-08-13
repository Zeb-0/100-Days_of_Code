# copy()

## Usage/Syntax:
_ items = #items
- new_items = items.copy()
---

# getattr()

- A built-in fn used to retrieve the value of an attribute from an object

## Usage:
- ~takes in 3 arguments:
    * object - to retrieve the attribute from
    * string - specifies name of the attr.
    * default value - returned if the `attribute` doesn't exist on the object

- **syntax:**
    * `getattr(object, attribute_name, default_value)
---

# join()
- Python method used for concatenate elemnts of an iterable(lists, tuples, strings, etc) into a single string

### Usage:
- `separator.join(iterable)`
    * separator -> used to separate the elements in the iterable.
         - could be: a comma, space etc
    * iterable - sequence of elements you want to join together
