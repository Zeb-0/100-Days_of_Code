// Destructuring using rest elements
// is similar to using: Array.prototype.slice() function


//simple tests
const [a, b, ...arr] = [1, 2, 3, 4, 5, 7];
console.log(a, b);
console.log(arr);
console.log()

// test : return a sub-array of the original array list
// with the first two elements omitted.
 
function removeFirstTwo(list) {
//	const shorterList = list;
	const [, , ...shorterList] = list;
	return shorterList;
}
const source = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const sourceWithoutFirstTwo = removeFirstTwo(source);
