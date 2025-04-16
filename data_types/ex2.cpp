#include <iostream>
#include <iomanip>
int main()
{
	double a, b;
	std::cout << "enter two numbers";
	std::cin >> a >> b;
	std::cout << std::fixed << std::setprecision(12);
	std::cout << "add" << (a+b) << std::endl;
	std::cout << "subtraction" << (a-b) <<  std::endl;
	std::cout << "material" << (a*b) << std::endl;
	std::cout << "division" << (a/b) << std::endl;	
	std::cerr << "error: cannot be divided by zero" << std::endl; 

	return 0;


}
