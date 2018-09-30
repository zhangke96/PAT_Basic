#ifdef PAT1078

#include <iostream>
#include <string>

std::string compression(std::string source);
std::string decompression(std::string source);

int main()
{
	char c;
	std::cin >> c;
	std::cin >> std::noskipws;
	if (c == 'C')
	{
		std::cin >> c;
		std::string input;
		int i = 0;
		std::getline(std::cin, input);
		std::string really = c + input;
		std::cout << compression(really);
		//std::cout << std::endl;
	}
	else if (c == 'D')
	{
		std::cin >> c;
		std::string input;
		std::getline(std::cin, input);
		std::string really = c + input;
		std::cout << decompression(really);
		//std::cout << std::endl;
	}
}

std::string compression(std::string source)
{
	char x = '0';
	int number = 0;
	std::string result;
	for (auto c : source)
	{
		if (c != x)
		{
			if (x <= 'Z' && x >= 'A' || x <= 'z' && x >= 'a' || x == ' ')
			{
				if (number > 1)
				{
					result.append(std::to_string(number));
				}
				result.push_back(x);
			}
			x = c;
			number = 1;
		}
		else
		{
			++number;
		}
	}
	if (x <= 'Z' && x >= 'A' || x <= 'z' && x >= 'a' || x == ' ')
	{
		if (number > 1)
		{
			result.append(std::to_string(number));
		}
		result.push_back(x);
	}
	return result;
}
std::string decompression(std::string source)
{
	std::string result;
	int number = 0;
	std::string numberStr;
	for (auto c : source)
	{
		if (c <= '9' && c >= '0')
		{
			numberStr.push_back(c);
		}
		else if (c <= 'Z' && c >= 'A' || c <= 'z' && c >= 'a' || c == ' ')
		{
			if (numberStr == "")
			{
				number = 1;
			}
			else
			{
				number = std::stoi(numberStr);
				numberStr.clear();
			}
			for (int i = 0; i < number; ++i)
			{
				result.push_back(c);
			}
		}
	}
	return result;
}
#endif // PAT1078
