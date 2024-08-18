#include <iostream>

// || and && Operators and Boolean values
int main() {
	bool y = true;
	bool n = false;
	bool d = 1;
	bool s = 0;
	bool a = true;
	bool b = true;
	bool c = false;
	bool d = false;

	std::cout << std::boolalpha << (d || y || d || b || a) << std::endl;

	std::cout << std::boolalpha << (d && y && a && b && d) << std::endl;


	std::cout << std::endl << std::endl;


	return  0;
}