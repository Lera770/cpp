#include <iostream>
int main()
{
	int numbers[10];
	std::cout << "enter 10 numbers" << std::endl;
	
	for (int i = 0; i < 10; i++) {
		std::cin >> numbers[i];
	}
	for (int i = 0; i < 10; i++) {
		for (int a = 0; a  < 9; a++) {
			if (numbers[a] > numbers[a+1]) {
				int k = numbers[a];
				numbers[a] = numbers[a+1];
				numbers[a+1] = k;
			
				}
		
			}
	
		}
		
		std::cout << "ready sorting";

		for (int i = 0; i < 10; i++) {
			std::cout << numbers[i] << "" << std::endl;
		}

	std::cout << std::endl;

	return 0;
} 
