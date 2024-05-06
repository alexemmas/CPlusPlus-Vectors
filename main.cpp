#include "Vectors.h"
#include <iostream>

int main() {
	vec3 q(1, 2, 3), w(3,2,1), e(4, 4, 4);
	
	vec2 r(1, 2), t(2, 3), y(0,0);
	
	//compare vectors e and q
	if (e == q) {
		std::cout << "They match" << std::endl;
	}
	else {
		std::cout << "They don't match" << std::endl;

	};
	
	//comapre e with the sum of q and w
	if (e == (q + w)) {
		std::cout << "They match" << std::endl;
	}
	else {
		std::cout << "They don't match" << std::endl;

	};
	//adding 2 vectors together and printing the output 
	y = r + t;
	y.print();

	return 0;
};