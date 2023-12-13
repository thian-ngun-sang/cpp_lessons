#include<iostream>
#include<iomanip>// there is a function in here to set some precision
		 // for floating point numbers
#include<limits>		

/*
  cin.clear() => helps in clearing the error flags which are set when std::cin fails
  		to interpret the input cin

  cin.ignore() => helps in removing the input contents that coluld cause the read failer
  		  takes ll characters in the input stream and discards them until it
		  	reaches a newline character, which it then discards as well

  fflush() => causes the system to empty the buffer that is associated with the specific
  		output stream if possible

  "stdin" => is an input stream where data is sent to and read by a program

  "stream" => streams are the sequence of data that are read from the source and written
  		to the destination
*/

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

	double balance = 0;
	int choice;

	do{
		std::cout << "*********************************************\n";
		std::cout << "Enter your choice\n";
		std::cout << "*********************************************\n";
		std::cout << "1. Show Balance\n";
		std::cout << "2. Deposit Money\n";
		std::cout << "3. Withdraw Money\n";
		std::cout << "4. Exit\n";

		std::cin >> choice;

		std::cin.clear();
		fflush(stdin);	// clear input buffer
		// std::cin.ignore();
				// this is necessary because every time we hit enter
				// there is a newline character
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		switch(choice){
			case 1: showBalance(balance);
				break;
			case 2: balance += deposit();
				showBalance(balance);
				break;
			case 3: balance -= withdraw(balance);
				showBalance(balance);
				break;
			case 4: std::cout << "Thanks for visiting\n";
				break;
			default:
				std::cout << "Invalid input\n";
	
		}
	}while(choice != 4);	

	return 0;
}

void showBalance(double balance){
	// set precision to "2"
	std::cout << "Your balance is $ " << std::setprecision(2) << std::fixed  << balance << std::endl;
}

double deposit(){
	double amount = 0;

	std::cout << "Enter amount to be deposited: ";
	std::cin >> amount;

	if(amount > 0){
		return amount;
	}else{
		std::cout << "Invalid amount: " << amount << std::endl;
		return 0;
	}
}

double withdraw(double balance){
	double amount;
	std::cout << "Enter amount to be withdrawn: ";
	std::cin >> amount;

	if(amount > balance){
		std::cout << "Insufficient amount to withdraw: " << amount << std::endl;
		return 0;
	}else if(amount < 0){
		std::cout << "Invalid amount: " << amount << std::endl;
		return 0;
	}else{
		return amount;
	}
}
