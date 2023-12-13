#include<iostream>

int main(){
	for(int i = 0; i <= 20; i++){
		if(i == 13){
			break;
		}
		std::cout << i << std::endl;
	}

	for(int i = 0; i <= 20; i++){
		if(i == 13){
			continue;
		}
		std::cout << i << std::endl;
	}

	std::cout << "Happy new year" << std::endl;
	return 0;
}
