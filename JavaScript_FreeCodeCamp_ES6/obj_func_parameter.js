// Use Destructuring assignment to pass an object -
// as a unction's parameters'

console.log("This is:")

const profileUpdate = (profileData) => {
	const {name, age, nationality, location} = profileData;
}
console.log(profileUpdate());
console.log();

console.log("Same as:");

const profUpdate = ({name, age, nationality, location}) => {
};
console.log(profUpdate({}));
console.log();

// exercise

const stats = {
	max : 56.78,
	std_dev : 14.34,
	median : 34.54,
	mode : 23.87,
	min : -0.75,
	average : 35.85
};

const half = ({max, min}) => (max + min) / 2.0;
console.log(half(stats));
