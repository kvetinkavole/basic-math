#include <iostream>

int main()
{// 1 = true, 0 = false;
	int x = 5;
	std::cout << "==: " << (x == 5) << std::endl; /*x equals 5*/
	std::cout << "!=" << (x != 5) << std::endl; /*x does not equal 5*/
	std::cout << "or " << (5 == x or x > 4) << std::endl; /*5 equals x or x is greater than 4*/
	std::cout << "&& " << (x == 5 && x > 1) << std::endl; /*x is equal to 5 and at the same time x is greater than 1*/
}
