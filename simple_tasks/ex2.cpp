#include <iostream>
int main()
{
	char name [50];
	std::cout << "enter the name";
	std::cin.getline(name, 50);
	std::cout << "Hello" << std::endl;
	std::cout << name << std::endl;
	return 0;
}

