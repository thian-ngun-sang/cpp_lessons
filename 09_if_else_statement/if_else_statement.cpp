#include<iostream>

int main(){
	int age;
	std::cout << "Enter your age: ";
	std::cin >> age;

	if(age >= 18){
		std::cout << "Welcome to our site" << std::endl;
	}else if(age <= 0){
		std::cout << "You are not born yet" << std::endl;
	}else{
		std::cout << " You are not old enough to enter" << std::endl;
	}
}
