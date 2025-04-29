#include <iostream>
int main()
{
	int goat;
	std::cout << "enter goat";
	std::cin >> goat;

	if (goat % 2 == 0) {
		std::cout << "even" << std::endl;	
	}
	

	else {
		std::cout << "odd" << std::endl;
	}

	
	if (goat % 8 == 0) {
                std::cout << "yes" << std::endl;
        }


        else {
                std::cout << "no" << std::endl;
        }


	if (goat % 16 == 0) {
                std::cout << "yes" << std::endl;
        }


        else {
                std::cout << "no" << std::endl;
        }


	std::cout << "eight: " << std::oct << goat << std::endl;
	std::cout << "hexadecimal: " << std::hex << goat << std::endl;

	return 0;
}
