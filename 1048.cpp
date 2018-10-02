#ifdef PAT1048

#include <iostream>
#include <string>

int main()
{
	std::string first, second;
	std::cin >> std::noskipws;
	std::cin >> first;
	getchar();
	std::cin >> second;
	if (second.length() < first.length())
	{
		std::string toInsert(first.length() - second.length(), '0');
		second.insert(0, toInsert);
	}
	int length = first.size();
	if (second.size() < length)
	{
		length = second.size();
	}
	std::string result;
	for (int i = 0; i < length; ++i)
	{
		int firstNumber = first.at(first.size() - i - 1) - '0';
		int secondNumber = second.at(second.size() - i - 1) - '0';
		if (i % 2) // 偶数位置的
		{
			int temp = secondNumber - firstNumber;
			if (temp < 0)
			{
				temp += 10;
			}
			result.push_back(temp + '0');
		}
		else  // 奇数位置
		{
			int temp = (firstNumber + secondNumber) % 13;
			if (temp == 10)
			{
				result.push_back('J');
			}
			else if (temp == 11)
			{
				result.push_back('Q');
			}
			else if (temp == 12)
			{
				result.push_back('K');
			}
			else
			{
				result.push_back(temp + '0');
			}
		}
	}
	if (length < second.size())
	{
		std::cout << second.substr(0, second.size() - length);
	}
	for (auto beg = result.rbegin(); beg != result.rend(); ++beg)
	{
		std::cout << *beg;
	}
	std::cout << std::endl;
}
#endif // PAT1048
