#ifdef PAT1043

#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;
	int P, A, T, e, s, t;
	P = 0;
	A = 0;
	T = 0;
	e = 0;
	s = 0;
	t = 0;
	for (auto c : input)
	{
		switch(c)
		{
		case 'P':
			++P;
			break;
		case 'A':
			++A;
			break;
		case 'T':
			++T;
			break;
		case 'e':
			++e;
			break;
		case 's':
			++s;
			break;
		case 't':
			++t;
			break;
		default:
			break;
		}
	}
	while (P || A || T || e || s || t)
	{
		if (P)
		{
			std::cout << "P";
			P -= 1;
		}
		if (A)
		{
			std::cout << "A";
			A -= 1;
		}
		if (T)
		{
			std::cout << "T";
			T -= 1;
		}
		if (e)
		{
			std::cout << "e";
			e -= 1;
		}
		if (s)
		{
			std::cout << "s";
			s -= 1;
		}
		if (t)
		{
			std::cout << "t";
			t -= 1;
		}
	}
	std::cout << std::endl;
	//std::cout << P << A << T << e << s << t << std::endl;
}
#endif // PAT1043
