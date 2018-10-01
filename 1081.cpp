#ifdef PAT1081

#include <iostream>
#include <string>
#include <cstdio>

enum RESULT{
	OK,
	TOO_SHORT,
	ILLEGAL,
	NO_NUMBER,
	NO_CHAR
};

bool isAllphabet(char c)
{
	return (c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a');
}
bool isNumber(char c)
{
	return (c <= '9') && (c >= '0');
}
bool isDigital(char c)
{
	return c == '.';
}
RESULT judge(const std::string& password)
{
	if (password.length() < 6)
	{
		return TOO_SHORT;
	}
	bool haveNumber = false;
	bool haveChar = false;
	for (auto c : password)
	{
		if (isAllphabet(c))
		{
			haveChar = true;
		}
		else if (isNumber(c))
		{
			haveNumber = true;
		}
		else if (isDigital(c))
		{

		}
		else
		{
			return ILLEGAL;
		}
	}
	if (haveNumber && !haveChar)
	{
		return NO_CHAR;
	}
	else if (!haveNumber && haveChar)
	{
		return NO_NUMBER;
	}
	else
	{
		return OK;
	}
}


int main()
{
	int number;
	std::cin >> number;
	std::string input;
	getchar();
	for (int i = 0; i < number; ++i)
	{
		std::getline(std::cin, input);
		RESULT result = judge(input);
		if (result == OK)
		{
			std::cout << "Your password is wan mei." << std::endl;
		}
		else if (result == TOO_SHORT)
		{
			std::cout << "Your password is tai duan le." << std::endl;
		}
		else if (result == ILLEGAL)
		{
			std::cout << "Your password is tai luan le." << std::endl;
		}
		else if (result == NO_NUMBER)
		{
			std::cout << "Your password needs shu zi." << std::endl;
		}
		else if (result == NO_CHAR)
		{
			std::cout << "Your password needs zi mu." << std::endl;
		}
	}

}
#endif // PAT1081
