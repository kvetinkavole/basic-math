#include <iostream>
#include <cmath>

int main()
{// 1 = true, 0 = false;
	int x = 5;
	std::cout << "==: " << (x == 5) << std::endl; /*x equals 5*/
	std::cout << "!= " << (x != 6) << std::endl; /*x does not equal 5*/
	std::cout << "or " << (5 == x or x > 4) << std::endl; /*5 equals x or x is greater than 4*/
	std::cout << "&& " << (x == 5 && x > 1) << std::endl; /*x is equal to 5 and at the same time x is greater than 1*/
	std::cout << "round value: " << round(22.4) << std::endl; /*round number*/
	std::cout << "max value: " << std::max(100, 80) << std::endl; /*finds the highest value and prints*/
	std::cout << "min value: " << std::min(100, 80) << std::endl; /*here it finds the lowest value and prints*/

	int a = std::max(100, 80); std::cout << a << std::endl; /*can be used in integer*/
	a = std::min(100, 80); std::cout << a << std::endl;

	if (x == 5, x != 6, 5 == x or x > 4, x == 5 && x > 1) /*if x equal to 5 and x does not equal 6 and x equal to 5 or x is greater than 4 and x equal to 5 &(and) x greater than 1 in same time -> console print Hello World!*/
		std::cout << "\nHello World!\n"; /*print selected text*/	

	x + 1 << x-2 << x*2 << x/2 + 1; /*x = 5; x + 1 = 6, x-2 = 4, x*2 = 8, x/2 = 4 + 1 = 5*/
	std::cout << std::endl << x << std::endl; /*print calculated value*/

	int y; y = 1+2*2-3; std::cout << y << std::endl; /*y = calculated value*/

	while (x < 10) { /*while x does not equal 10 codes will keep repeating*/
		x++; /*adds a value until it is equal to the value specified in while*/
		std::cout << x; /*lists all missing values*/
	}
	return 0; /*exit code*/
}
