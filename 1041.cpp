#ifdef PAT1041

#include <iostream>
#include <map>
#include <utility>
#include <string>

int main()
{
	int number;
	std::cin >> number;
	std::map<int, std::pair<std::string, int>> records;
	for (int i = 0; i < number; ++i)
	{
		std::string id;
		int test, real;
		std::cin >> id >> test >> real;
		records.insert({ test, {id, real} });
	}
	std::cin >> number;
	for (int i = 0; i < number; ++i)
	{
		int testNumber;
		std::cin >> testNumber;
		auto c = records.find(testNumber);
		std::cout << c->second.first << " " << c->second.second << std::endl;
	}
}
#endif // PAT1041
