#ifdef PAT1022
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int c = a + b;

	int d;
	cin >> d;
	stack<int> s;

	while (c >= d)
	{
		s.push(c % d);
		c = c / d;
	}
	cout << c;
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	cout << endl;
}
#endif // PAT1022
