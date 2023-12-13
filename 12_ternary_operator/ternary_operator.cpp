#include<iostream>

int main(){
	bool hungry = false;
	// hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry" << std::endl;
	

	// make a ternary operator inside cout statement
	std::cout <<(hungry ? "You are hungry" : "You are not hungry") << std::endl;
	return 0;
}
