#ifdef PAT1087

#include <iostream>
#include <set>

int main()
{
	int n;
	std::cin >> n;
	std::set<int> result;
	for (int i = 1; i <= n; ++i)
	{
		int temp = i / 2 + i / 3 + i / 5;
		result.insert(temp);
	}
	std::cout << result.size() << std::endl;
}
#endif // PAT1087
