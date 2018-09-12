/*************************************************************************
> File Name: 1005.cpp
> Author:ZhangKe
> Mail:ch.zhangke@gmail.com
> Created Time: 2016年08月31日 星期三 17时37分42秒
************************************************************************/
#ifdef PAT1005

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int input;
	std::cin >> input;
	std::vector<int> inp;
	int input2;
	while (std::cin >> input2)
		inp.push_back(input2);
	std::vector<int> remain(inp);
	std::vector<int> l;
	for (auto c : inp)
	{
		if (std::find(remain.cbegin(), remain.cend(), c) == remain.cend())
			continue;
		input = c;
		while (input != 1)
		{
			if (input % 2 == 0)
				input = input / 2;
			else
				input = (3 * input + 1) / 2;
			auto location = std::find(remain.begin(), remain.end(), input);
			if (location != remain.end())
			{
				remain.erase(location);
			}
		}
	}
	std::sort(remain.begin(), remain.end(), std::greater<int>());
	for (int i = 0; i < remain.size(); ++i)
	{
		if (i != 0)
			std::cout << " ";
		std::cout << remain.at(i);
	}
	std::cout << std::endl;
}

#endif // PAT1005