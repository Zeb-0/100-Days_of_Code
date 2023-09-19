# DAY 40 - 100-Days_of_Code
Today I started Regular Expressions in JS.

## Regular Expressions
- [Source](https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/using-the-test-method)

Regular expressions are used in progrsmming to match parts of a string using patterns.

---

# DAY 45 - 100-Days_of_Code

## Extract Matches
WE us2e the `.match()` method

To use it, apply it on a string and pass it in the regex inside the parentheses.

## Find more than the first match
We use the global search flag : `g`

Example:
```
let repeatRegex = /Repeat/g;
testStr.match(repeatRegex);
```

Here `match` returns the value `["Repeat", "Repeat", "Repeat"]`