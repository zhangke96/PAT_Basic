#ifdef PAT1017

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string A;
	string B;
	string result;
	string yu;
	cin >> A >> B;

	int b = stoi(B);
	int index = 0;
	while (index < A.size())
	{
		int temp = stoi(string(A, index, 1));
		if (temp < b)
		{
			if (index < A.size() - 1)
			{
				temp = stoi(string(A, index, 2));
				int shang = temp / b;
				result.push_back(static_cast<char>(shang + '0'));
				int yushu = temp % b;
				A.replace(A.begin(), A.begin() + 2, to_string(yushu));
			}
			else
			{
				yu.assign(A.begin(), A.end());
				break;
			}
		}
		else
		{
			int shang = temp / b;
			result.push_back(static_cast<char>(shang + '0'));
			int yushu = temp % b;
			A.replace(A.begin(), A.begin() + 1, to_string(yushu));
		}
	}
	if (result == "")
		result = "0";
	cout << result << " " << yu << endl;
}
#endif // PAT1017
