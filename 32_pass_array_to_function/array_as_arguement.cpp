#include<iostream>

double getTotal(double prices[], int size);

int main(){
	double prices[] = {49.99, 15.05, 75, 9.99};
	int size = sizeof(prices)/sizeof(prices[0]);
	
	// we just pass the name of the array, we don't need to include "[]"
	double total = getTotal(prices, size); 
	std::cout << "$" << total;

	return 0;
}

// when we pass array, we really get the array, we get the pointer of the array,
// 	so we don't know the size of the array
double getTotal(double prices[], int size){
	double total = 0;

	for(int i = 0; i < size;i++){
		total += prices[i];
	}
	return total;
}
