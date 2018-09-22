#ifdef PAT1064

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int numberToSum(int);
int main()
{
	int number;
	std::cin >> number;
	std::map<int, int> records;
	int input;
	for (int i = 0; i < number; ++i)
	{
		std::cin >> input;
		int temp = numberToSum(input);
		if (records.find(temp) == records.end())
		{
			records[temp] = 1;
		}
		else
		{
			++records[temp];
		}
	}
	std::vector<int> results;
	for (auto c : records)
	{
		results.push_back(c.first);
	}
	std::sort(results.begin(), results.end());
	std::cout << results.size() << std::endl;
	for (int i = 0; i < results.size(); ++i)
	{
		if (i == 0)
		{
			std::cout << results.at(i);
		}
		else
		{
			std::cout << " " << results.at(i);
		}
	}
	std::cout << std::endl;
}

int numberToSum(int input)
{
	int sum = 0;
	while (input)
	{
		sum += input % 10;
		input /= 10;
	}
	//std::cout << sum << std::endl;
	return sum;
}
#endif // PAT1064
