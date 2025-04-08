#include <iostream>
#include <iomanip>
int main()
{
	double R;
	const double pi = 3.14;
	std::cout << "enter number R";
	std::cin >> R;
	double circle_area = pi*R*R;
	double circle_length = 2*pi*R;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "circle area" << circle_area << std::endl;
	std:: cout << "circle length" << circle_length << std::endl;
	return 0;

}
