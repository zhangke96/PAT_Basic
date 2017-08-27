#ifdef PAT1027
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	char character;
	cin >> num >> character;

	int size = sqrt((num + 1) / 2);   // how many rows

	int remain = num + 1 - 2 * size*size; // how many c remains
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < i; ++j)
			cout << " ";
		for (int j = 2 * (size - i) - 1; j > 0; --j)
			cout << character;
		cout << endl;
	}
	for (int i = 1; i < size; ++i)
	{
		for (int j = size - i - 1; j > 0; --j)
			cout << " ";
		for (int j = 0; j < 2 * i + 1; ++j)
			cout << character;
		cout << endl;
	}
	cout << remain << endl;
}
#endif // PAT1027
