#ifdef PAT1025

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

struct Node
{
	std::string Addr;
	std::string Next;
	int Data;
};
int main()
{
	std::string beginAddr;
	int number;
	int reserveNumber;
	std::cin >> beginAddr >> number >> reserveNumber;
	std::string Addr, Next;
	int Data;
	std::vector<Node> nodes;
	std::map<std::string, int> cache;
	std::vector<int> location;
	location.reserve(number);
	for (int i = 0; i < number; ++i)
	{
		std::cin >> Addr >> Data >> Next;
		nodes.push_back({ Addr, Next, Data });
		cache[Addr] = i;
		location.push_back(i);
	}
	
	/*for (auto c : location)
	{
		std::cout << c << " ";
	}
	std::cout << std::endl;*/

	std::vector<Node> sortedNodes;
	sortedNodes.reserve(number);
	int i = 0;
	for (; i < number; ++i)
	{
		int index = cache[beginAddr];
		sortedNodes.push_back(nodes[index]);
		beginAddr = nodes[index].Next;
		if (beginAddr == "-1")
		{
			break;
		}
	}
	for (int j = 0; j < (i+1) / reserveNumber; ++j)
	{
		std::reverse(location.begin() + j * reserveNumber, location.begin() + (j + 1) * reserveNumber);
	}
	for (int j = 0; j < i + 1; ++j)
	{
		if (j != i)
		{
			std::cout << sortedNodes[location[j]].Addr << " " << sortedNodes[location[j]].Data << " " << sortedNodes[location[j + 1]].Addr << std::endl;
		}
		else
		{
			std::cout << sortedNodes[location[j]].Addr << " " << sortedNodes[location[j]].Data << " -1" << std::endl;
		}
	}
}
#endif // PAT1025
