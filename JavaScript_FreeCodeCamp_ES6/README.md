### still on DAY 2

# ECMA Script 6
--- 

# DAY 39 - 100-Days_of_Code

### Export functions/variables
ref :
- [export](https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/es6/use-export-to-share-a-code-block)

### Import - reuse JS code
Ref:
- [import](https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/es6/reuse-javascript-code-using-import)

Usage:
- `import { f_name} from 'module_name(.js file)';`
- Example:
    * import { add } from './export.js';

#### Import everything from a file
It is done using `import * as` syntax

Refer to:
- [Import all](https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/es6/use--to-import-everything-from-a-file)

### Export Fallback
Ref:
- [export default](https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/es6/create-an-export-fallback-with-export-default)

Is a syntax used if only one value is being exported from a file.
Also used to provide a fallback value for a file or module.

Example:
1. named function:
* `export default func add(x, y) {
    return x + y;
}`

2. anonymous function:
* `export default func(x, y) {
    return x + y
}`
---

### Import a Default Export
Ref : [import default](https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/es6/import-a-default-export)

---

### Create a javascript Promise
Is just a promise in JS to do something, usually asyncronously.
- `Promise` is a constructor function
- Use together with `new` keyword to create one.
- Takes
    * function as argument
    * function takes 2 parameters - `resolve` & `reject`
- the 2 parameters are used to determint the outcome of the promise.

Syntax:
- `const myPromise = new Promise((resolve, reject) => {

});`

### Complete a Promise with resolve and reject
A Promise has 3 stages:
- `pending` - has no way of completing it
- `fulfilled` - when the promise has been `resolved` are added
- `rejected` - failed


