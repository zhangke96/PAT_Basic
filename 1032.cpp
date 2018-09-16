#ifdef PAT1032

#include <iostream>
#include <map>
#include <algorithm>

int main()
{
	int size;
	std::cin >> size;
	std::map<int, int> statistics;
	int id, score;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> id >> score;
		if (statistics.find(id) == statistics.end())
		{
			statistics[id] = score;
		}
		else
		{
			statistics[id] += score;
		}
	}
	/*std::sort(statistics.begin(), statistics.end(), 
		[](const auto lhs, const auto rhs)
		{
			return lhs.second > rhs.second;
		});
*/
	id = 0;
	score = 0;
	for (auto c : statistics)
	{
		if (c.second >= score)
		{
			id = c.first;
			score = c.second;
		}
	}
	std::cout << id << " " << score << std::endl;
}
#endif // PAT1032
