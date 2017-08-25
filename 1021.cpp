#ifdef PAT1021
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int nums[10] = { 0 };
	for (auto c : input)
		++nums[c - '0'];
	for (int i = 0; i < 10; ++i)
	{
		if (nums[i])
		{
			cout << i << ":" << nums[i] << endl;
		}
	}
}
#endif // PAT1021
