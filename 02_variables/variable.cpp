#include <iostream>

int main(){
	int x;	// declaration
	x = 5;	// assignment
	int y = 10; // declaration and assignment

	std::cout<<x<<std::endl;
	std::cout<<y<<std::endl;

	int sum = x + y;
	std::cout<<sum<<std::endl;

	// double
	double temperature = 34.35;
	std::cout<<temperature<<std::endl;

	// single character
	char grade = 'A';
	std::cout<<grade<<std::endl;

	// boolean
	bool light_on = true;
	std::cout<<light_on<<std::endl;

	// strings
	std::string firstname = "thian";
	std::string lastname = "ngun";
	std::cout << firstname << " " << lastname << std::endl;

	return 0;
}
