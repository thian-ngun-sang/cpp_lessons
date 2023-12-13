#include<iostream>

int main(){
	// fill() = fills a range of elements with a specified value
	// 		fill(begin, end, value)
	// 		fill(first_address, end_address, value), ending_address is not filled
	
	std::string foods[100];
	
	fill(foods, foods + 1, "one");
	fill(foods + 2, foods + 100, "pizza");
	
	for(std::string food: foods){
		std::cout << food << "\n";
	}

	std::cout << foods << "\n";
	std::cout << foods + 100 << std::endl;

	return 0;
}
