#ifdef PAT1037

#include <iostream>
#include <string>
#include <algorithm>

struct money
{
	int G;
	int S;
	int K;
	struct money operator-(const money& rhs);
	struct money operator-=(const money& rhs);
};

money StrToMoney(const std::string &);
int main()
{
	std::string input;
	std::cin >> input;
	money pay = StrToMoney(input);
	std::cin >> input;
	money have = StrToMoney(input);
	have -= pay;
	std::cout << have.G << "." << have.S << "." << have.K << std::endl;
}

money StrToMoney(const std::string &str)
{
	auto numberStartIndex = str.cbegin();
	int i = 0;
	money result;
	auto first = 0;
	auto index = str.find_first_of('.', 0);
	result.G = std::stoi(str.substr(first, index));
	auto second = str.find_first_of('.', index + 1);
	result.S = std::stoi(str.substr(index + 1, second - index));
	result.K = std::stoi(str.substr(second + 1, str.length() - second - 1));
	return result;
}

money money::operator-(const money& rhs)
{
	money result = *this;
	//if (result.K < rhs.K)
	//{
	//	result.S -= 1;
	//	result.K += 29;
	//}
	//result.K -= rhs.K;
	//while (result.S < rhs.S)
	//{
	//	result.G -= 1;
	//	result.S += 17;
	//}
	//result.G -= rhs.G;
	//result.S -= rhs.S;
	//if (result.S < 0)
	//{

	//}
	int all = result.G * 17 * 29 + result.S * 29 + result.K -
		rhs.G * 17 * 29 - rhs.S * 29 - rhs.K;
	bool nagitive = false;
	if (all < 0)
	{
		nagitive = true;
		all = -all;
	}
	result.K = all % 29;
	result.S = (all / 29) % 17;
	result.G = all / (29 * 17);
	if (nagitive)
	{
		result.G = -result.G;
	}
	return result;
}

money money::operator-=(const money& rhs)
{
	*this = *this - rhs;
	return *this;
}
#endif // PAT1037
