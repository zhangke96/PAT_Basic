#ifdef PAT1046

#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	int a, b, c, d;

	int A = 0;
	int B = 0;
	for (int i = 0; i < number; ++i)
	{
		std::cin >> a >> b >> c >> d;
		int sum = a + c;
		if (b == d)
		{
			continue;
		}
		else if (b == sum && d != sum)
		{
			++B;
		}
		else if (d == sum && b != sum)
		{
			++A;
		}
	}
	std::cout << A << " " << B << std::endl;
}
#endif // PAT1046
