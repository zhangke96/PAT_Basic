#ifdef PAT1075

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
	int K;
	std::cin >> beginAddr >> number >> K;
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
	// 输出负数
	int remain = number;
	for (auto beg = sortedNodes.begin(); beg != sortedNodes.end(); ++beg)
	{
		if (beg->Data < 0)
		{
			if (remain-- == number)
			{
				std::cout << beg->Addr << " " << beg->Data << " ";
			}
			else
			{
				std::cout << beg->Addr << std::endl;
				std::cout << beg->Addr << " " << beg->Data << " ";
			}
		}
	}
	// 输出 [0, K]
	for (auto beg = sortedNodes.begin(); beg != sortedNodes.end(); ++beg)
	{
		if (beg->Data >= 0 && beg->Data <= K)
		{
			if (remain-- == number)
			{
				std::cout << beg->Addr << " " << beg->Data << " ";
			}
			else
			{
				std::cout << beg->Addr << std::endl;
				std::cout << beg->Addr << " " << beg->Data << " ";
			}
		}
	}
	// 输出 (K, +00)
	for (auto beg = sortedNodes.begin(); beg != sortedNodes.end(); ++beg)
	{
		if (beg->Data > K)
		{
			if (remain-- == number)
			{
				std::cout << beg->Addr << " " << beg->Data << " ";
			}
			else
			{
				std::cout << beg->Addr << std::endl;
				std::cout << beg->Addr << " " << beg->Data << " ";
			}
		}
	}
	std::cout << "-1" << std::endl;
	/*for (int i = 0; i < number; ++i)
	{
		if (sortedNodes[i].Data < 0)
		{

		}
	}*/
}
#endif // PAT1075
