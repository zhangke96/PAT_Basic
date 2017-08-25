#ifdef PAT1020
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;
int main()
{
	int n;
	double total;
	cin >> n >> total;
	vector<pair<double, double>> yuebings;
	yuebings.reserve(n);

	double input;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		yuebings.push_back(make_pair(input, 0));
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		yuebings[i].second = input;
	}
	sort(yuebings.begin(), yuebings.end(), [](auto &lhs, auto &rhs)->bool
	{
		return (lhs.second / lhs.first) > (rhs.second / rhs.first);
	});
	double totalMoneny = 0.0;
	for (auto c : yuebings)
	{
		if (c.first <= total)
		{
			total -= c.first;
			totalMoneny += c.second;
		}
		else
		{
			totalMoneny += total * c.second / c.first;
			break;
		}
	}
	printf("%.2lf\n", totalMoneny);
}
#endif // PAT1020
