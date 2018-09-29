#ifdef PAT1057

#include <iostream>
#include <string>

int main()
{
	std::string aLine;
	std::getline(std::cin, aLine);

	int sum = 0;
	for (auto c : aLine)
	{
		if (c <= 'Z' && c >= 'A')
		{
			sum += (c - 'A' + 1);
		}
		else if (c <= 'z' && c >= 'a')
		{
			sum += (c - 'a' + 1);
		}
	}
	int zero = 0;
	int one = 0;
	while (sum)
	{
		if (sum % 2)
		{
			++one;
		}
		else
		{
			++zero;
		}
		sum /= 2;
	}
	std::cout << zero << " " << one << std::endl;
}
#endif // PAT1057
