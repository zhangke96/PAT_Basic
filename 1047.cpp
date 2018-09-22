#ifdef PAT1047

#include <iostream>
#include <string>
#include <map>

int main()
{
	int number;
	std::map<int, int> scores;
	std::cin >> number;
	for (int i = 0; i < number; ++i)
	{
		std::string input;
		std::cin >> input;
		int index = input.find_first_of('-', 0);
		int teamNumber = std::stoi(input.substr(0, index));
		int score;
		std::cin >> score;
		auto location = scores.find(teamNumber);
		if (location == scores.end())
		{
			scores[teamNumber] = score;
		}
		else
		{
			scores[teamNumber] += score;
		}
	}
	int teamNumber = -1;
	int max = 0;
	for (auto c : scores)
	{
		if (c.second > max)
		{
			teamNumber = c.first;
			max = c.second;
		}
	}
	std::cout << teamNumber << " " << max << std::endl;
}
#endif // PAT1047
