#ifdef PAT1055

#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

int main()
{
	int N, K;
	std::cin >> N >> K;
	std::vector<std::pair<int, std::string>> people;

	for (int i = 0; i < N; ++i)
	{
		std::string name;
		int height;
		std::cin >> name >> height;
		people.push_back({ height, name });
	}
	std::sort(people.begin(), people.end(), [](auto lhs, auto rhs) { return lhs.first < rhs.first || (lhs.first == rhs.first && lhs.second > rhs.second);  });
	//std::cout << std::endl;
	//for (auto c : people)
	//{
	//	std::cout << c.first << " " << c.second << std::endl;
	//}
	int remain = N;
	for (int i = 0; i < K; ++i)
	{
		int number = N / K; // 每排人数
		if (i == 0) // 最后一排
		{
			number = N - number * (K - 1);
		}
		std::vector<int> result;
		result.resize(number);
		result[number / 2] = remain--;
		for (int j = 0; j < number - 1; ++j)
		{
			if (j % 2 == 0) // 站在右手边
			{
				result[number / 2 - 1 - j / 2] = remain--;
			}
			else
			{
				result[number / 2 + 1 + j / 2] = remain--;
			}
		}
		/*for (auto c : result)
		{
			std::cout << c << " ";
		}
		std::cout << std::endl;*/
		for (int i = 0; i < number; ++i)
		{
			if (i == 0)
			{
				std::cout << people[result[i] - 1].second;
			}
			else
			{
				std::cout << " " << people[result[i] - 1].second;
			}
		}
		std::cout << std::endl;
	}
}
#endif // PAT1055
