#include<iostream>

int main(){
	/* type conversion = conversion a value of one data type to another
			implicit = automatic
			explicit = precede value with new data type (int) */

	// implicit
	int x = 3.14; // implicitly covert "3.14" into "integer" because variable can't hold double values
	std::cout << x << std::endl;

	// explicit
	double y = (int) 3.14; // cast "3.14" into <integer> and store into <double> y
	std::cout << y << std::endl;

	// implicit
	char letter = 100; // store "100" as <letter> "d" according to ASCII
	std::cout << letter << std::endl;

	return 0; 
}
