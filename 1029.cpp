#ifdef PAT1029

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	int index1 = 0;
	int index2 = 0;

	vector<char> keys;

	while (index1 < str1.size() || index2 < str2.size())
	{
		/*while (index1 < str1.size() && str1[index1] == '_')
			++index1;*/
		/*if (index1 == str1.size())
		{
			break;
		}*/
		/*while (index2 < str2.size() && str2[index2] == '_')
			++index2;*/
		if (index2 == str2.size())
		{
			for (; index1 < str1.size(); ++index1)
			{
				char c;
				c = str1[index1];
				/*if (c == '_')
					continue;*/
				if (c <= 'z' && c >= 'a')
					c -= ('a' - 'A');
				if (find(keys.cbegin(), keys.cend(), c) == keys.cend())
					keys.push_back(c);
			}
			break;
		}
		if (str1[index1] != str2[index2])
		{
			char c;
			c = str1[index1];
			if (c <= 'z' && c >= 'a')
				c -= ('a' - 'A');
			if (find(keys.cbegin(), keys.cend(), c) == keys.cend())
				keys.push_back(c);
			++index1;
		}
		else
		{
			++index1;
			++index2;
		}
	}
	for (auto c : keys)
		cout << c;
	cout << endl;
}

#endif // PAT1029