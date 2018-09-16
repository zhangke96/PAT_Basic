#ifdef PAT1031

#include <iostream>
#include <string>
#include <vector>

bool isVaild(const std::string&);
int main()
{
	int n;
	std::cin >> n;
	std::string idCard;
	bool allVaild = true;
	std::vector<std::string> notVaild;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> idCard;
		if (!isVaild(idCard))
		{
			notVaild.push_back(idCard);
		}
	}
	if (notVaild.empty())
	{
		std::cout << "All passed" << std::endl;
	}
	else
	{
		//std::cout << notVaild.size() << std::endl;
		for (auto c : notVaild)
		{
			std::cout << c << std::endl;
		}
	}
}

bool isVaild(const std::string &idCard)
{
	static int weights[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	static char replace[] = { '1','0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
	int sum = 0;
	for (int i = 0; i < 17; ++i)
	{
		sum += weights[i] * (idCard.at(i) - '0');
	}
	int result = sum % 11;
	if (idCard[17] == replace[result])
	{
		return true;
	}
	else
	{
		return false;
	}
}
#endif // PAT1031
