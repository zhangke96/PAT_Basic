#ifdef PAT1030

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main()
{
	long size, p;
	std::cin >> size >> p;
	std::vector<long> numbers;
	numbers.reserve(size);
	long input;
	for (long i = 0; i < size; ++i)
	{
		std::cin >> input;
		numbers.push_back(input);
	}
	std::sort(numbers.begin(), numbers.end());

	auto beg = numbers.end();
	auto end = numbers.end();
	long total = 0;
	for (beg = numbers.begin(); beg < numbers.end(); ++beg)
	{
		for (end = beg + total; end < numbers.end(); ++end)
		{
			if (*end <= (*beg * p))
			{
				long temp  = end - beg + 1;
				if (temp > total)
				{
					total = temp;
				}
			}
			else
			{
				break;
			}
		}
	}
	std::cout << total << std::endl;
}
#endif // PAT1030
