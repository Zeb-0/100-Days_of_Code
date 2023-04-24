// Using spread operator to destructure an array
const [x, y] = [1, 2, 3, 4, 5, 6];
console.log(x, y);


// To assign an element to a variable:
// Use commas to reach the desired index

const [n, m,,,, p] = [1, 2, 3, 4, 5, 6];
console.log("n = " + n + '\n' + "m = " + m + '\n' + "p = " + p);

/* trying... swap two variables using destructuring */
 let a = 8, b = 6;

// const [a, b] = [8, 6];
[a, b] = [b, a];
console.log(b, a);
