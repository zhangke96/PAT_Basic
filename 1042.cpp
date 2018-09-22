#ifdef PAT1042

#include <iostream>
#include <string>

int main()
{
	int result[26] = { 0 };

	std::string input;
	std::getline(std::cin, input);

	for (auto c : input)
	{
		if (c <= 'z' && c >= 'a')
		{
			++result[c - 'a'];
		}
		else if (c <= 'Z' && c >= 'A')
		{
			++result[c - 'A'];
		}
	}
	int index = 0;
	for (int i = 1; i < 26; ++i)
	{
		if (result[i] > result[index])
		{
			index = i;
		}
	}
	std::cout << char('a' + index) << " " << result[index] << std::endl;
}
#endif // PAT1042
