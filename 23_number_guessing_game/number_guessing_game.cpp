#include<iostream>

int main(){
	int num;
	int guess;
	int tries;

	srand(time(NULL));
	num = (rand() % 100) + 1;

	std::cout << "********************** Number Guessing Game *********************\n";
	do{
		std::cout << "Enter a guess between (1-100): ";
		std::cin >> guess;
		tries++;

		if(guess > num){
			std::cout << "Too hight\n";
		}else if(guess < num){
			std::cout << "Tow low\n";
		}else{
			std::cout << "CORRECT\n";
		}
	}while(guess != num);

	std::cout << "# of tries: " << tries << std::endl;
	std::cout << "*****************************************************************\n";

	return 0;
}
