#ifdef PAT1024
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
	string input;
	cin >> input;
	if (input[0] == '-')
		cout << '-';
	auto pos = find(input.cbegin(), input.cend(), 'E');
	string num(input.cbegin() + 1, pos);
	bool flag = false;
	if (*(pos + 1) == '-')
		flag = false;
	else
		flag = true;
	int size = stoi(string(pos + 2, input.cend()));
	bool complete = true;
	if (size < (num.size() - 2))
		complete = false;
	if (flag)
	{
		if (complete)
		{
			for (auto c : num)
			{
				if (c != '.')
					cout << c;
			}
			size -= (num.size() - 2);
			while (size--)
				cout << '0';
		}
		else
		{
			for (int i = 0; i < num.size(); ++i)
			{
				if (i == 0)
					cout << num[i];
				else if (i == 1)
				{
				}
				else
				{
					if (size != 0)
						cout << num[i];
					else
					{
						--i;
						cout << '.';
					}
					--size;
				}
			}
		}
	}
	else
	{
		stack<char> s;
		bool beg = false;
		bool flag2 = false;
		for (int i = num.size() - 1; i >= 0; --i)
		{
			if (num[i] != '.')
				s.push(num[i]);
			else
			{
				if (size == 0)
				{
					s.push('.');
					flag2 = true;
				}
				beg = true;
				continue;
			}
			if (size > 0 && beg)
				--size;
		}
		while (size--)
		{
			s.push('0');
		}
		if (!flag2)
			cout << "0.";
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}
	}
	cout << endl;
	return 0;
}
#endif // PAT1024
