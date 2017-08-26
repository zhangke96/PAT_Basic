#ifdef PAT1023
#include <iostream>

using namespace std;

int main()
{
	int nums[10] = { 0 };
	for (int i = 0; i < 10; ++i)
		cin >> nums[i];
	for (int i = 1; i < 10; ++i)
	{
		if (nums[i])
		{
			cout << i;
			--nums[i];
			break;
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		while (nums[i])
		{
			cout << i;
			--nums[i];
		}
	}
	cout << endl;
}
#endif // PAT1023
