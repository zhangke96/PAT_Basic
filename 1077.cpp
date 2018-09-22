#ifdef PAT1077

#include <iostream>
#include <deque>
#include <algorithm>

int main()
{
	int number, max;
	std::cin >> number >> max;
	for (int i = 0; i < number; ++i)
	{
		int teacher;
		std::cin >> teacher;
		std::deque<int> students;
		int input;
		for (int j = 0; j < number - 1; ++j)
		{
			std::cin >> input;
			if (input <= max && input >= 0)
			{
				students.push_back(input);
			}
		}
		std::sort(students.begin(), students.end());
		students.pop_front();
		students.pop_back();
		double sum = 0.0;
		for (auto c : students)
		{
			sum += c;
		}
		sum /= students.size();
		double result = (sum + teacher)/2 + 0.5;
		std::cout << (int)result << std::endl;
	}
}
#endif // PAT1077
