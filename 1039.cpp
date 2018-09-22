#ifdef PAT1039

#include <iostream>
#include <string>

int main()
{
	int have[128] = { 0 };
	int should[128] = { 0 };

	std::string input;
	std::cin >> input;
	for (auto c : input)
	{
		++have[c];
	}
	std::cin >> input;
	for (auto c : input)
	{
		++should[c];
	}
	for (int i = 0; i < 128; ++i)
	{
		should[i] -= have[i];
	}
	int remain = 0;
	int need = 0;
	for (int i = 0; i < 128; ++i)
	{
		if (should[i] > 0)
		{
			need += should[i];
		}
		else
		{
			remain -= should[i];
		}
	}
	if (need == 0)
	{
		std::cout << "Yes " << remain << std::endl;
	}
	else
	{
		std::cout << "No " << need << std::endl;
	}
}
#endif // PAT1039
