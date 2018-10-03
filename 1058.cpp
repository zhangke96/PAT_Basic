#ifdef PAT1058

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
	std::map<int, int> statistic;
	for (int i = 0; i < studentNumber; ++i)
	{
		int totalScore = 0;
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
			else
			{
				statistic[j + 1]++;
			}
		}
		std::cout << totalScore << std::endl;
	}
	std::map<int, std::set<int>> temp;
	int max = 0;
	for (auto c : statistic)
	{
		if (c.second > max)
		{
			max = c.second;
		}
		temp[c.second].insert(c.first);
	}
	if (temp.size() == 0)
	{
		std::cout << "Too simple" << std::endl;
	}
	else
	{
		auto c = temp[max];
		std::cout << max;
		//bool first = true;
		for (auto d : c)
		{
			std::cout << " " << d;
		}
		std::cout << std::endl;
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

#endif // PAT1058
