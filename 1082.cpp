#ifdef PAT1082

#include <iostream>
#include <cmath>
#include <string>

int main()
{
	std::string maxId;
	double max = -1.0;
	std::string minId;
	double min = 200.0;

	int number;
	std::cin >> number;
	for (int i = 0; i < number; ++i)
	{
		std::string id;
		double x, y;
		std::cin >> id;
		std::cin >> x >> y;
		double temp = std::sqrt(x * x + y * y);
		if (temp > max)
		{
			max = temp;
			maxId = id;
		}
		if (temp < min)
		{
			min = temp;
			minId = id;
		}
	}
	std::cout << minId << " " << maxId << std::endl;
}
#endif // PAT1082
