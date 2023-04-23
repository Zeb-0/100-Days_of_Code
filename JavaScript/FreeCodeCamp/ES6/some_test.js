const a = {
	x : 1,
	y : 2,
	z : 3
};
const b = Object.assign({}, a);
b.x = 4;

console.log(a.x);
console.log(b.x);
