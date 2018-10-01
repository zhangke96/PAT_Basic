#ifdef PAT1038

#include <iostream>
#include <map>

int main()
{
	int n;
	std::cin >> n;
	std::map<int, int> scores;
	for (int i = 0; i < n; ++i)
	{
		int score;
		std::cin >> score;
		if (scores.find(score) == scores.end())
		{
			scores[score] = 1;
		}
		else 
		{
			++scores[score];
		}
	}
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int score;
		std::cin >> score;
		int number = 0;
		if (scores.find(score) == scores.end())
		{
			
		}
		else
		{
			number = scores[score];
		}
		if (i == 0)
		{
			std::cout << number;
		}
		else
		{
			std::cout << " " << number;
		}
	}
	std::cout << std::endl;
}
#endif // PAT1038
