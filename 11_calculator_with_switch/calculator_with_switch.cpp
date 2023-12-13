#include<iostream>

int main(){
	char op;
	double num1;
	double num2;
	double result;

	std::cout << "************** CALCULATOR *****************\n";

	std::cout << "Enter first number: ";
	std::cin >> num1;

	std::cout << "Choose operator [\"+\", \"-\", \"*\", \"/\"]: ";
	std::cin >> op;

	std::cout << "Enter second number: ";
	std::cin >> num2;

	switch(op){
		case '+':
			result = num1 + num2;
			std::cout << "Result: " << result << std::endl;
			break;
		case '-':
			result = num1 - num2;
			std::cout << "Result: " << result << std::endl;
			break;
		case '*':
			result = num1 * num2;
			std::cout << "Result: " << result << std::endl;
			break;
		case '/':
			result = num1 / num2;
			std::cout << "Result: " << result << std::endl;
			break;
		default:
			std::cout << "Please enter a valid operator" << std::endl;
			break;

	}

	std::cout << "\n\n************** CALCULATOR *****************";

	return 0;
}
