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

Example;
* `export default func add(x, y) => {
    return x + y;
}`

