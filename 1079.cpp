#ifdef PAT1079


#include <iostream>
#include <string>
#include <algorithm>

bool isPalindromic(const std::string&);
std::string addSelf(std::string);
std::string add2Str(std::string, std::string);

int main()
{
	std::string number;
	std::cin >> number;
	int i = 0;
	while (i < 10)
	{
		if (!isPalindromic(number))
		{
			++i;
			number = addSelf(number);
		}
		else
		{
			break;
		}
	}
	if (isPalindromic(number))
	{
		std::cout << number << " is a palindromic number." << std::endl;;
	}
	else
	{
		std::cout << "Not found in 10 iterations." << std::endl;
	}
}
bool isPalindromic(const std::string& number)
{
	for (int i = 0; i < number.size() / 2; ++i)
	{
		if (number.at(i) != number.at(number.size() - i - 1))
		{
			return false;
		}
	}
	return true;
}
std::string addSelf(std::string number)
{
	std::cout << number << " + ";
	std::string another = number;
	std::reverse(another.begin(), another.end());
	std::cout << another << " = ";
	std::string result = add2Str(number, another);
	std::cout << result << std::endl;
	return result;
}
std::string add2Str(std::string lhs, std::string rhs)
{
	std::string result;
	auto lIndex = lhs.rbegin();
	auto rIndex = rhs.rbegin();
	bool carry = false;
	while (lIndex != lhs.rend() && rIndex != rhs.rend())
	{
		int temp = (*lIndex - '0') + (*rIndex - '0');
		if (carry)
		{
			temp += 1;
		}
		if (temp >= 10)
		{
			temp -= 10;
			carry = true;
		}
		else
		{
			carry = false;
		}
		++lIndex;
		++rIndex;
		result.insert(result.begin(), temp + '0');
	}
	while (lIndex != lhs.rend())
	{
		int temp = (*lIndex - '0');
		if (carry)
		{
			temp += 1;
		}
		if (temp >= 10)
		{
			temp -= 10;
			carry = true;
		}
		else
		{
			carry = false;
		}
		++lIndex;
		result.insert(result.begin(), temp + '0');
	}
	while (rIndex != rhs.rend())
	{
		int temp = (*lIndex - '0');
		if (carry)
		{
			temp += 1;
		}
		if (temp >= 10)
		{
			temp -= 10;
			carry = true;
		}
		else
		{
			carry = false;
		}
		++rIndex;
		result.insert(result.begin(), temp + '0');
	}
	if (carry)
	{
		result.insert(result.begin(), '1');
	}
	return result;
}
#endif // PAT1079
