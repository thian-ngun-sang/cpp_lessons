#include<iostream>

int main(){
	int temp;
	bool sunny = true;
	std::cout << "Enter the temperature: ";
	std::cin >> temp;

	if(temp > 0 && temp <= 30){
		std::cout << "The temperature is good" << std::endl;
	}else{
		std::cout << "The temperature is bad" << std::endl;
	}

	if(!sunny){
		std::cout << "The weatheer is cold" << std::endl;
	}else{
		std::cout << "The weather is hot" << std::endl;
	}
}
