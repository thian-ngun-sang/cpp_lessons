#include <iostream>

namespace first{
	int x = 0;
}
namespace second{
	int x = 1;
}

void first_namespace(){
	using namespace first;
	std::cout<<x<<std::endl;
}
void second_namespace(){
	using namespace second;
	std::cout<<x<<std::endl;
}

int main_temp0(){
	/* namespace: provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
		      A name space allows for indentically named entities(variable) as long as the namespaces are different.*/
	int x = 2;
	std::cout<<x<<std::endl;	//we didn't specify which namespace to use

	first_namespace();	// std::cout<<x => ouputs 0, because it uses "first" namespace
	second_namespace();	// std::cout<<x => outputs 1, because it uses "second" namespace

	std::cout<<first::x<<std::endl;	// first::x => use the value of x from "first" namespace 
	return 0;
}

int main_temp1(){
	using std::cout;	// we don't need to write std::cout for character out
	using std::endl;
	cout<<"Hello there"<<endl;
	return 0;
}

int main(){
	using namespace std;	// we don't need to write "std::" to use methods from namespace "std"
	cout<<"Hello"<<endl;
	return 0;
}
