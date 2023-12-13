#include<iostream>

	// pseudo-random = NOT truly random(but close)

int main(){
	// std::cout << time(NULL) << std::endl;	// time(NULL) => current calendar time

	srand(time(NULL));	// time(NULL) => seed for rsand();

	// rand() => accept ouput from srand()
	// rand() % 6 => divide what ever rand() ouput by "6" and store the remainder
	// if you want to get random number between 1 - 7, divide rand() by "7"
	int num1 = (rand() % 6) + 1;
	int num2 = (rand() % 6) + 1;
	int num3 = (rand() % 6) + 1;

	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl;

	return 0;
}
