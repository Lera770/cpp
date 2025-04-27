#include <iostream>
int main()
{
	char maggots;
	std::cout << "enter symbol";
	std::cin >> maggots;
	std::cout << "you enter symbol: " << maggots << std::endl;
	std::cout << "decimal: " << int(maggots) << std::endl;
	std::cout << "hexadecimal: " << std::hex << int(maggots) << std::endl;

	return 0;


}
