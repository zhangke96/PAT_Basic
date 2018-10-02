#ifdef PAT1059

#include <map>
#include <string>
#include <iostream>
#include <set>
#include <cmath>

bool isPrimer(int n);
int main()
{
	int n;
	std::map<std::string, int> rank;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::string input;
		std::cin >> input;
		rank[input] = i + 1;
	}
	std::cin >> n;
	std::set<std::string> searched;
	for (int i = 0; i < n; ++i)
	{
		std::string input;
		std::cin >> input;
		auto location = rank.end();
		if ((location = rank.find(input)) == rank.end())
		{
			std::cout << input << ": " << "Are you kidding?" << std::endl;
		}
		else
		{
			if (searched.find(input) == searched.end())
			{
				searched.insert(input);
				if (location->second == 1)
				{
					std::cout << input << ": " << "Mystery Award" << std::endl;
				}
				else if (isPrimer(location->second))
				{
					std::cout << input << ": " << "Minion" << std::endl;
				}
				else
				{
					std::cout << input << ": " << "Chocolate" << std::endl;
				}
			}
			else
			{
				std::cout << input << ": " << "Checked" << std::endl;
			}
		}
	}
}

bool isPrimer(int n)
{
	if (n == 1)
	{
		return true;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); ++i)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
#endif // PAT1059
