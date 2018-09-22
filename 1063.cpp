#ifdef PAT1063

#include <iostream>
#include <cmath>
#include <cstdio>

int main()
{
	int number;
	std::cin >> number;
	double max = 0.0;
	for (int i = 0; i < number; ++i)
	{
		int a, b;
		std::cin >> a >> b;
		double result = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
		if (result > max)
		{
			max = result;
		}
	}
	//std::cout << max << std::endl;
	printf("%.2lf\n", max);
}
#endif // PAT1063
