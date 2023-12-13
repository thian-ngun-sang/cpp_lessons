#include<iostream>

// local variable is used by default

// "::" => scope resolution operator
// 	=> use this operator to choose global variable

int age = 19;

void printAge();

int main(){
	int age = 20;
	
	std::cout << ::age << std::endl;	
	printAge();

	return 0;
}

void printAge(){
	int age = 18;
	std::cout<< ::age << std::endl;
}
