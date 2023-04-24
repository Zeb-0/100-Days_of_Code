// creating functions that take a variable number of grs
// these arg are stored in a array
// are accessed later from inside the function.

const sum = (...args) => {
	let total = 0;
	for (let i = 0; i < args.length; i++) {
		total += args[i];
	}
	return total;
}
console.log(sum(1, 2, 3, 4));
