#include<iostream>
#include<limits>

int searchArray(int array[], int size, int element);

int searchFood(std::string array[], int size, std::string element);

int main(){
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int index;
	int myNum;

	std::cout << "Enter element to search for: ";
	std::cin >> myNum;

	index = searchArray(numbers, size, myNum);
	if(index != -1){
		std::cout << "Element is at: " << index << "\n";
	}else{
		std::cout << myNum << " is not in the array\n";
	}

	// std::cin leaves newlin character "\n";
	// so, we have to remove it with std::cin.ignore()
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	std::string foods[] = {"pizza", "hamburger", "hotdog"};
	int foodSize = sizeof(foods)/sizeof(foods[0]);
	int foodIndex;

	std::cout << "Enter food to search for: ";
	std::string myFood;
	std::getline(std::cin, myFood);
	std::cout << myFood << std::endl;

	foodIndex = searchFood(foods, foodSize, myFood);
	if(foodIndex != -1){
			std::cout << "Element is at: " << foodIndex << "\n";
		}else{
			std::cout << myFood << " is not in the array\n";
		}

		return 0;
	}

int searchArray(int array[], int size, int element){
	for(int i = 0; i < size; i++){
		if(array[i] == element){
			return i;
		}
	}
	return -1;
}

int searchFood(std::string array[], int size, std::string element){
	for(int i = 0; i < size; i++){
		if(array[i] == element){
			return i;
		}
	}
	return -1;
}

