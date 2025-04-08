#include <iostream>
#include <iomanip>
int main()
{
	float P, R;
	int T;
	std::cout << "enter amount";
	std::cin >> P;
	std::cout << "enter the loan period";
        std::cin >> T;
	std::cout << "enter the interest rate";
	std::cin >> R;
	float I = (P*T*R)/100;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Interest_rate(float)" << I <<  std::endl;
	std::cout << "Interest_rate(int)" << static_cast<int>(I) << std::endl;
	return 0;

}

