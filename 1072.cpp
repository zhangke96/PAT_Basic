#ifdef PAT1072

#include <iostream>
#include <string>
#include <set>

int main()
{
	int peopleNumber, itemNumber;
	std::cin >> peopleNumber >> itemNumber;
	std::set<std::string> items;
	for (int i = 0; i < itemNumber; ++i)
	{
		std::string input;
		std::cin >> input;
		items.insert(input);
	}
	int problemStudents = 0;
	int allItems = 0;
	for (int i = 0; i < peopleNumber; ++i)
	{
		std::string name;
		std::cin >> name;
		int number;
		std::cin >> number;
		bool ifHave = false;
		for (int j = 0; j < number; ++j)
		{
			std::string item;
			std::cin >> item;
			if (items.find(item) != items.end())
			{
				++allItems;
				if (!ifHave)
				{
					ifHave = true;
					std::cout << name << ": ";
					std::cout << item;
				}
				else
				{
					std::cout << " " << item;
				}
			}
		}
		if (ifHave)
		{
			std::cout << std::endl;
			++problemStudents;
		}
	}
	std::cout << problemStudents << " " << allItems << std::endl;
}
#endif // PAT1072
