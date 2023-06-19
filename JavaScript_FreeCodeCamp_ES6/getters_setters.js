class School {
	constructor(name) {
		this._name = name;
	}
//	getter
	get type() {
		return this._name;
	}
//	setter
	set type(gender){
		this._name = gender;
	}
}

const School1 = new School('Lenana');
console.log(`The name of the school is ${School1.type} School.`);
School1.type = 'Male';
console.log(`The institution consists of ${School1.type} students only.`);
