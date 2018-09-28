#ifdef PAT1073

#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <utility>
#include <cstdio>

struct problem
{
	int score;
	std::set<char> answers;
};

std::pair<int, std::set<char>> compare(const std::set<char>&, std::set<char>&);

int main()
{
	int studentNumber, problemNumber;
	std::cin >> studentNumber >> problemNumber;
	std::vector<problem> problems;
	for (int i = 0; i < problemNumber; ++i)
	{
		problem newProblem;
		int score, answerNumber, rightNumber;
		std::cin >> score >> answerNumber >> rightNumber;
		newProblem.score = score;
		for (int j = 0; j < rightNumber; ++j)
		{
			char input;
			std::cin >> input;
			newProblem.answers.insert(input);
		}
		problems.push_back(newProblem);
	}
	std::map<std::string, int> statistic;
	for (int i = 0; i < studentNumber; ++i)
	{
		double totalScore = 0.0;
		for (int j = 0; j < problemNumber; ++j)
		{
			char input;
			std::cin >> input;
			int number;
			std::cin >> number;
			std::set<char> temp;
			for (int k = 0; k < number; ++k)
			{
				std::cin >> input;
				temp.insert(input);
			}
			std::cin >> input;
			std::pair<int, std::set<char>> result = compare(problems[j].answers, temp);
			if (result.first == 0)
			{
				totalScore += problems.at(j).score;
			}
			else if (result.first == -1)
			{

			}
			else if (result.first == 1)
			{
				totalScore += problems.at(j).score / 2.0;
			}
			for (char c : result.second)
			{
				std::string errorNumber(std::to_string(j + 1) + "-" + c);
				if (statistic.find(errorNumber) == statistic.end())
				{
					statistic[errorNumber] = 1;
				}
				else
				{
					++statistic[errorNumber];
				}
			}
		}
		printf("%.1lf\n", totalScore);
	}
	std::map<int, std::set<std::string>> temp;
	for (auto c : statistic)
	{
		temp[c.second].insert(c.first);
	}
	if (temp.size() == 0)
	{
		std::cout << "Too simple" << std::endl;
	}
	else
	{

		for (auto beg = temp.crbegin(); beg != temp.crend(); ++beg)
		{
			for (auto const c : beg->second)
			{
				std::cout << beg->first << " " << c << std::endl;
			}
			break;
		}
	}
}

std::pair<int, std::set<char>> compare(const std::set<char>& right, std::set<char>& users)
{
	std::set<char> resultSet;
	int result = 0;
	for (auto c : right)
	{
		std::set<char>::iterator index;
		if ((index = users.find(c)) != users.end())
		{
			users.erase(index);
		}
		else
		{
			resultSet.insert(c);
			result = 1; // 有漏选
		}
	}
	for (auto c : users)
	{
		resultSet.insert(c);
		result = -1; // 有错选
	}
	return { result, resultSet };
}

#endif // PAT1073
