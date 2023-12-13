#include<iostream>

// void function declared and defined at the top
void sayHello(){
	std::cout << "Hello" << std::endl;
}

// void function declared at the top and defined at the bottom
void happyBirthday();

// void function with parameter
void getName(std::string name);

int main(){
	sayHello();
	happyBirthday();

	std::cout << " ";
	getName("Sang Boih\n");
	return 0;
}

void happyBirthday(){
	std::cout << "Happy Birthday";
}

void getName(std::string name){
	std::cout << name << std::endl;
}
