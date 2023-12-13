#include<iostream>

/*
	>> => extraction operator
	<< => insertion operator
*/

int main(){
	std::string name;
	int age;

	std::cout << "What's your age: ";
	std::cin >> age;

	/* when we accept user  input with "cin" followed by "getline()",
		in our input buffer, there is a newline character "\n"
			and we don't pickup that newline character

	 when we reach the "getline()" function,
		it accepts the newline character "\n" that's within the buffer */

	std::cout << "What's your name: ";
	// std::getline(std::cin, name);	// getline(std::cin, age) => accepts  white spaces
	std::getline(std::cin >> std::ws, name); // ">>std::ws" => eliminates any newline character or any white spaces before userinput

	std::cout << "Hello " << name << "\n";
	std::cout << "You are " << age << " years old";
	return 0;
}
