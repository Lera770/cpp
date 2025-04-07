#include <iostream>
int main ()
{
	double A, B, C;
	std::cout << "enter three numbers";
	std::cin >> A >> B >> C;
	double surface_area = 2*(A*B+A*C+B*C);
	double volume_of_a_parallelepiped = (A*B*C);
	std::cout <<"surface area" << surface_area << std::endl;
	std::cout << "surface area" << volume_of_a_parallelepiped << std::endl;
	return 0;


}
