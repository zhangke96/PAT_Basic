#ifdef PAT1053

#include <iostream>
#include <cstdio>

int main()
{
	int N, D;
	double e;
	std::cin >> N >> e >> D;
	int possible = 0;
	int judged = 0;
	for (int i = 0; i < N; ++i)
	{
		int size;
		std::cin >> size;
		int less = 0;
		for (int j = 0; j < size; ++j)
		{
			double mount;
			std::cin >> mount;
			if (mount < e)
			{
				++less;
			}
		}
		if (size > D && less > size / 2)
		{
			++judged;
		}
		else if (less > size / 2)
		{
			++possible;
		}
	}
	printf("%.1lf%% %.1lf%%\n", (double)possible * 100.0 / (double)N, (double)judged * 100.0 / (double)N);
}
#endif // PAT1053
