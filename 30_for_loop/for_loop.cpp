#include<iostream>

int main(){
	std::string students[] = {"Spongebob", "Patrick", "Squidward", "Bob"};

	for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
		std::cout << students[i] << std::endl;
	}

	return 0;
}
