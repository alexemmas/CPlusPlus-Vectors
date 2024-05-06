#pragma once

//////////////////////////////////////////////////////////////////////////
//vec2 class definition
//////////////////////////////////////////////////////////////////////////

//2 dimensional floating point vector class with operator overloads
class vec2 {
	//allowing vectors to be public for manipulation outside of the class
public:
	float x;
	float y;
	//constructor 
	vec2(float a2, float b2);

	//overloading operators for addition and evaluation
	vec2 operator+ (vec2 const& obj);
	bool operator== (vec2 const& obj);
	//print function
	void print(void);
};


//////////////////////////////////////////////////////////////////////////
//vec3 class definition
//////////////////////////////////////////////////////////////////////////

//3 dimensional floating point vector class with operator overloads
//inheriting base functionality from 2D vector class
class vec3 : public vec2 {
public:
	//allowing 3rd vector to be public for manipulation outside of the class in  alignment with 2D vector class
	float z;
	//constructor
	vec3(float a3, float b3, float c3);
	//print function
	void print(void);
	//overloading operators for addition, multiplication and evaluation
	vec3 operator+ (vec3 const& obj);
	vec3 operator* (vec3 const& obj);
	bool operator== (vec3 const& obj);
};
