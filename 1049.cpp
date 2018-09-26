#ifdef PAT1049

#include <iostream>
#include <vector>
#include <cstdio>

int main()
{
	int n;
	std::cin >> n;
	std::vector<double> numbers;
	numbers.reserve(n);
	double input;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> input;
		numbers.push_back(input);
	}
	double sum = 0.0;
	for (int i = 0; i < n; ++i)
	{
		sum += (numbers.at(i) * (i + 1) * (n - i));
	}
	printf("%.2lf\n", sum);
}
#endif // PAT1049
