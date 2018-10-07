#ifdef PAT1050

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <functional>

std::pair<int, int> getMN(int n);
enum direction
{
	RIGHT,
	LEFT,
	UP,
	DOWN
};

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> numbers;
	numbers.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		int input;
		std::cin >> input;
		numbers.push_back(input);
	}
	std::sort(numbers.begin(), numbers.end(), std::greater<int>());
	auto mn = getMN(n);
	int M = mn.first;
	int N = mn.second;
	int remainRow = M - 1;
	int remainCol = N;
	std::pair<int, int> location{ 0, 0 };
	std::vector<int> result(n, 0);
	direction direct = RIGHT;
	if (N == 1)
	{
		direct = DOWN;
		remainRow += 1;
	}
	if (M == 1)
	{
		direct = RIGHT;
	}
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		result[location.first * N + location.second] = i;
		if (direct == RIGHT) // 首先检查是否到边界,在改变位置
		{
			if (++count == remainCol)
			{
				direct = DOWN;
				location.first += 1;
				count = 0;
				remainCol--;
			}
			else
			{
				location.second += 1;
			}
		}
		else if (direct == DOWN)
		{
			if (++count == remainRow)
			{
				direct = LEFT;
				location.second -= 1;
				count = 0;
				remainRow--;
			}
			else
			{
				location.first += 1;
			}
		}
		else if (direct == LEFT)
		{
			if (++count == remainCol)
			{
				direct = UP;
				location.first -= 1;
				count = 0;
				remainCol--;
			}
			else
			{
				location.second -= 1;
			}
		}
		else if (direct == UP)
		{
			if (++count == remainRow)
			{
				direct = RIGHT;
				location.second += 1;
				count = 0;
				remainRow--;
			}
			else
			{
				location.first -= 1;
			}
		}
	}
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (j != 0)
			{
				std::cout << " ";
			}
			std::cout << numbers[result[i * N + j]];
		}
		std::cout << std::endl;
	}
	//std::cout << std::endl;
}

std::pair<int, int> getMN(int n)
{
	if (n == 1)
	{
		return { 1, 1 };
	}
	else
	{
		for (int i = sqrt(n); i >= 0; --i)
		{
			if (n % i == 0)
			{
				return { n / i, i };
			}
		}
	}
	return { n, 1 };
}
#endif // PAT1050
