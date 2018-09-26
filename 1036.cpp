#ifdef PAT1036

#include <iostream>
int main()
{
	int n;
	char c;
	std::cin >> n >> c;
	for (int i = 0; i < n; ++i)
	{
		std::cout << c;
	}
	for (int i = 0; i < int(n / 2.0 - 1.5); ++i)
	{
		std::cout << std::endl;
		std::cout << c;
		for (int j = 0; j < n - 2; ++j)
		{
			std::cout << " ";
		}
		std::cout << c;
	}
	std::cout << std::endl;
	for (int i = 0; i < n; ++i)
	{
		std::cout << c;
	}
}
#endif // PAT1036
