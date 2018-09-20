#ifdef PAT1061

#include <iostream>
#include <vector>

int main()
{
	int studentNumber, questionNumber;
	std::cin >> studentNumber >> questionNumber;
	std::vector<int> scores;
	scores.reserve(questionNumber);
	std::vector<int> answers;
	answers.reserve(questionNumber);

	int input;
	for (int i = 0; i < questionNumber; ++i)
	{
		std::cin >> input;
		scores.push_back(input);
	}
	for (int i = 0; i < questionNumber; ++i)
	{
		std::cin >> input;
		answers.push_back(input);
	}
	for (int i = 0; i < studentNumber; ++i)
	{
		int sum = 0;
		for (int j = 0; j < questionNumber; ++j)
		{
			std::cin >> input;
			if (input == answers[j])
			{
				sum += scores[j];
			}
		}
		std::cout << sum << std::endl;
	}
}
#endif // PAT1061
