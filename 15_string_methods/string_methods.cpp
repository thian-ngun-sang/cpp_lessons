#include<iostream>

int main(){
	std::string name;
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	std::cout << name.length() << std::endl;  // .length()
	std::cout << name.empty() << std::endl;  // .empty()

	name.append("@gmail.com"); // .append()
	std::cout << "Your email is " << name << std::endl;

	std::cout << name.at(3) << std::endl;	// .at()
	std::cout << name.find('@') << std::endl;  // .find() => get the index of first appearance of '@'

	name.erase(0, 3);  // .erase() => erase the first three character of the string
	std::cout << name << std::endl;

	name.clear();	// .clear()
	std::cout << name << std::endl;
	return 0;
}
