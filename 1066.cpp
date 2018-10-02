#ifdef PAT1066

#include <iostream>
#include <iomanip>

int main()
{
	int c, r, begin, end, replace;
	std::cin >> c >> r >> begin >> end >> replace;
	int n;
	for (int i = 0; i < c; ++i)
	{
		for (int j = 0; j < r; ++j)
		{
			std::cin >> n;
			if (n >= begin && n <= end)
			{
				n = replace;
			}
			if (j != 0)
			{
				std::cout << " ";
			}
			std::cout << std::setw(3) << std::setfill('0') << n;
		}
		std::cout << std::endl;
	}
}
#endif // PAT1066
