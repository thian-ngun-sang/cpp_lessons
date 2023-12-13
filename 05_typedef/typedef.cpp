#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t; // declare std:string as "text_t"
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){
	/* typedef: reserved keyword to create an additional name(alias) for another data type.
		    new identifier for an existing type
		    helps with readabilit and reduces typos
		    use when there is a clear benefit
		    replaced with 'using' (work betterwith templates) */

	text_t firstName = "Bro";
	number_t age =21;

	std::cout << firstName << " " << age << std::endl;
	return 0;
}
