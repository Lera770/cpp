#include <iostream>
#include <iomanip>
int main ()
{
	int regime;
	double temp;

	std::cout << "enter regime ";
	std::cin >> regime;
	
	std::cout << "enter temp ";
	std::cin >> temp;

	if (regime == 1)
	{
		if (temp < -273.15)
		{
			std::cout << "It's too cold to count!" << std::endl;
		}
		else 
		{
			std::cout << std::fixed << std::setprecision(2) << temp * 9/5 +32 << std::endl;
		}
	}
	if (regime == 2) 
	{
		if (temp < -459.67)
		{
			 std::cout << "It's too cold to count!" << std::endl;
		} 
		else 
		{
			std::cout << std::fixed << std::setprecision(2) << (temp - 32) * 9/5 << std::endl;
		}
	}
	return 0;
}
