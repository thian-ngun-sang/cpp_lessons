#include<iostream>
#include<cmath>	// including "cmath" header file

int main(){
	double x = 3;
	double y = 4;

	double a = std::max(x, y);
	// std::cout << a << std::endl;

	double b = std::min(x, y);
	// std::cout << b << std::endl;

	/* math functions in cmath header file */
	// double c = pow(2, 3);	// 2 power 3
	// double c = sqrt(9);	// square root of 9
	// double c = round(3.142);  // round "3.142"
	// double c = ceil(3.142);  // round up "3.142"
	double c = floor(3.142);   // round down "3.142"
	// std::cout << c << std::endl;

	/* Get the hypotenuse of a triangle  */
	double sideA, sideB, sideC;
	std::cout << "Enter side A: ";
	std::cin >> sideA;
	std::cout << "Enter side B: ";
	std::cin >> sideB;
	sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
	std::cout << sideC << std::endl;

	return 0;
}
