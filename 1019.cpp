#ifdef PAT1019
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool ifAllSame(const string &);
template <typename T>
void printVec(const vector<T> &);
template <typename T>
int VecMinus(const vector<T> &, const vector<T> &);
vector<int> CreateVec(int num);
int main()
{
	string input;
	cin >> input;
	while (input.size() < 4)
		input.insert(input.begin(), '0');
	if (ifAllSame(input)) // 四个数字都一样
	{
		cout << input << " - " << input << " = 0000" << endl;
		return 0;
	}
	vector<int> nums;
	for (auto c : input)
		nums.push_back(c - '0');
	while (nums.size() < 4)
		nums.insert(nums.begin(), 0);
	vector<int> numsCopy = nums;

	while (true)
	{
		sort(nums.begin(), nums.end(), [](int a, int b) { return a > b; });
		sort(numsCopy.begin(), numsCopy.end(), [](int a, int b) { return a < b; });
		int result = VecMinus(nums, numsCopy);
		printVec(nums); cout << " - "; printVec(numsCopy); cout << " = ";
		printVec(CreateVec(result)); cout << endl;
		if (result == 6174)
			break;
		else
		{
			nums = CreateVec(result);
			numsCopy = nums;
		}
	}
}
bool ifAllSame(const string &nums)
{
	char a = nums[0];
	for (auto c : nums)
	{
		if (a != c)
			return false;
	}
	return true;
}
template <typename T>
void printVec(const vector<T> &vec)
{
	for (auto c : vec)
		cout << c;
}
template <typename T>
int VecMinus(const vector<T> &lhs, const vector<T> &rhs)
{
	string a, b;
	for (auto c : lhs)
		a.push_back(c + '0');
	for (auto c : rhs)
		b.push_back(c + '0');
	return stoi(a) - stoi(b);
}
vector<int> CreateVec(int num)
{
	string str = to_string(num);
	vector<int> result;
	for (auto c : str)
		result.push_back(c - '0');
	while (result.size() < 4)
		result.insert(result.begin(), 0);
	return result;
}
#endif // PAT1019
