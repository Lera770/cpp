#include <iostream>
#include <iomanip>
int main()
{
	double Leha;
	std::cout << "enter Leha 0.0 - 9.0:  ";
	std::cin >> Leha;
	std::cout << std::fixed << std::setprecision(1);

	if (Leha < 0.0 || Leha > 9.0)
	{
		std::cout << "Incorrect number of points!" << std::endl;
	}
	else 
	{
		if (Leha <= 4.4)
		{
			std::cout << "unsatisfactory rating 2.0" << std::endl;
		}
		else
		{
			if (Leha <= 5.2)
			{
				std::cout << "satisfactory 3.0" << std::endl;
			}
			else 
			{
				if (Leha <= 6.2)
				{
					std::cout << "the score is above satisfactory 3.5" << std::endl;
				}
				else 
				{
					if (Leha <= 7.2)
					{
						std::cout << "good rating 4.0" << std::endl;
					}
					else 
					{
						if (Leha <= 8.2)
						{
							std::cout << "is rated above good 4.5" << std::endl;
						}
						else 
						{
							if (Leha <= 9.0)
							{
								std::cout << "very good 5.0" << std::endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
