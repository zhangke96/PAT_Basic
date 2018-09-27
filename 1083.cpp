#ifdef PAT1083

#include <iostream>
#include <map>
#include <cmath>

int main()
{
	std::map<int, int> result;
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int input;
		std::cin >> input;
		input = std::abs(input - i);
		if (result.find(input) == result.end())
		{
			result[input] = 1;
		}
		else
		{
			++result[input];
		}
	}
	for (auto beg = result.crbegin(); beg != result.crend(); ++beg)
	{
		if (beg->second > 1)
		{
			std::cout << beg->first << " " << beg->second << std::endl;
		}
	}
}
#endif // PAT1083
