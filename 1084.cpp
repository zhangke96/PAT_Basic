#ifdef PAT1084

#include <iostream>
#include <string>

int main()
{
	int d, n;
	std::cin >> d >> n;
	std::string source(std::to_string(d));

	for (int i = 1; i < n; ++i)
	{
		std::string temp;
		char x = 'a';
		int number = 1;
		for (auto c : source)
		{
			if (c != x)
			{
				if (x <= '9' && x >= '0')
				{
					temp.push_back(x);
					temp.append(std::to_string(number));
				}
				x = c;
				number = 1;
			}
			else
			{
				++number;
			}
		}
		
 		temp.push_back(x);
		temp.append(std::to_string(number));
		source = temp;
	}
	std::cout << source << std::endl;
}
#endif // PAT1084
