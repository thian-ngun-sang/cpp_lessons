#include <iostream>

int main(){
	std::string cars[] = {"fedora", "prado", "landcruiser"};

	double prices[5];	// we have to specify array size when declaring array without instantiation 
	prices[0] = 1.3;
       	prices[1] = 3.6;
	prices[2] = 8.5;
	prices[3] = 9.2;
	prices[4] = 8.8;
	
	std::cout << prices[3] << std::endl;
	return 0;
}
