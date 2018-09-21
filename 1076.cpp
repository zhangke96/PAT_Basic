#ifdef PAT1076

#include <iostream>
#include <string>

int cal(const std::string &);
int main()
{
	int number;
	std::cin >> number;
	for (int i = 0; i < number * 4; ++i)
	{
		std::string input;
		std::cin >> input;
		int result = cal(input);
		if (result)
		{
			std::cout << result;
		}
	}
	std::cout << std::endl;
}

int cal(const std::string &input)
{
	if (input[2] == 'T')
	{
		return input[0] - 'A' + 1;
	}
	else
	{
		return 0;
	}
}
#endif // PAT1076
