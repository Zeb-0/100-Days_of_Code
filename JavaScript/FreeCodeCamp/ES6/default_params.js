/* default parameters are used in place where no arguments are specified */

const increment = (number, value = 1) => number + value;
console.log(increment(12));
console.log(increment(90, 10));
console.log(increment(99));
