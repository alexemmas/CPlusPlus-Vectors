#include <iostream>
#include "Vectors.h"
//////////////////////////////////////////////////////////////////////////
//vec2 functions
//////////////////////////////////////////////////////////////////////////

//constructor for vec2 setting variables x and y values at initiation
vec2::vec2(float a2, float b2) {
	x = a2;
	y = b2;
};

//overloading the + operator to add values from 2 different vectors together
vec2 vec2::operator+ (vec2 const& obj) {
	vec2 add(0,0);
	add.x = x + obj.x;
	add.y = y + obj.y;
	return add;

};

//simple print function to display x and y
void vec2::print() {
	std::cout << "x= " << x << " y= " << y << std::endl;
};

// overloading the == operator to evaluate the values of 2 different 2 dimensional vectors
bool vec2::operator== (vec2 const& obj) {

	if ((this->x == obj.x) && (this->y == obj.y)) {
		return true;

	};
	return false;

};

//////////////////////////////////////////////////////////////////////////
//vec3 functions
//////////////////////////////////////////////////////////////////////////

//constructor for vec3 using vec2 constructor to set variables x and y values and initializing z value
vec3::vec3(float a3, float b3, float c3) : vec2(a3, b3) {
	z = c3;

};

//print function calling base vec2 class then adding additional print value for z
void vec3::print(void) {
	vec2::print();
	std::cout << "z= " << z << std::endl;
};

//overloading the + operator to add values from 2 different 3 dimensional vectors together
vec3 vec3::operator+ (vec3 const& obj) {
	vec3 add(0, 0, 0);
	add.x = x + obj.x;
	add.y = y + obj.y;
	add.z = z + obj.z;
	return add;
};

//overloading the * operator to multiply values from 2 different 3 dimensional vectors together
vec3 vec3::operator* (vec3 const& obj) {
	vec3 add(0,0,0);
	add.x = x * obj.x;
	add.y = y * obj.y;
	add.z = z * obj.z;
	return add;
};

// overloading the == operator to evaluate the values of 2 different 3 dimensional vectors
bool vec3::operator== (vec3 const& obj) {

	if ((this->x == obj.x) && (this->y == obj.y) && (this->z == obj.z)) {
		return true;

	};
	return false; 

};