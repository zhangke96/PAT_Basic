#ifdef PAT1086

#include <iostream>
#include <algorithm>
#include <string>

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::string result(std::to_string(a * b));

	std::reverse(result.begin(), result.end());
	for (auto beg = result.begin(); beg != result.end();)
	{
		if (*beg != '0')
		{
			break;
		}
		else
		{
			beg = result.erase(beg);
		}
	}
	std::cout << result << std::endl;
}
#endif // PAT1086
