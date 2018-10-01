#ifdef PAT1044

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <iterator>

bool isNUmber(const std::string &str);

static std::string MarsNumber[]  = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
static std::string MarsHighNumber[] = { "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
int main()
{
	int number;
	std::cin >> number;
	getchar();
	for (int i = 0; i < number; ++i)
	{
		std::string input;
		std::getline(std::cin, input);
		if (isNUmber(input))
		{
			int number = std::stoi(input);
			if (number / 13)
			{
				std::cout << MarsHighNumber[number / 13 - 1] ;
			}
			if (number % 13)
			{
				if (number / 13)
				{
					std::cout << " ";
				}
				std::cout << MarsNumber[number % 13] << std::endl;
			}
			else
			{
				if (number / 13 == 0)
				{
					std::cout << "tret";
				}
				std::cout << std::endl;
			}
			
		}
		else
		{
			auto index = input.find_first_of(" ", 0);
			if (index == std::string::npos)
			{
				auto location = std::find(std::begin(MarsNumber), std::end(MarsNumber), input);
				if (location == std::end(MarsNumber))
				{
					auto location2 = std::find(std::begin(MarsHighNumber), std::end(MarsHighNumber), input);
					std::cout << (location2 - std::begin(MarsHighNumber) + 1) * 13 << std::endl;
				}
				else
				{
					std::cout << location - MarsNumber << std::endl;
				}
			}
			else
			{
				std::string first = input.substr(0, index);
				std::string second = input.substr(index + 1, input.size() - index);
				auto location = std::find(std::begin(MarsHighNumber), std::end(MarsHighNumber), first);
				auto location2 = std::find(std::begin(MarsNumber), std::end(MarsNumber), second);
				std::cout << (location - std::begin(MarsHighNumber) + 1) * 13 + location2 - std::begin(MarsNumber) << std::endl;
			}
		}
	}
}

bool isNUmber(const std::string &str)
{
	for (auto c : str)
	{
		if (!(c <= '9' && c >= '0'))
		{
			return false;
		}
	}
	return true;
}
#endif // PAT1044
