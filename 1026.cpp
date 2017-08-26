#ifdef PAT1026
#include <iostream>

using namespace std;

int main()
{
	int begin, end;
	cin >> begin >> end;
	int seconds = (end + 50 - begin) / 100;
	int hour = seconds / (60 * 60);
	int minute = seconds % (60 * 60);
	seconds = minute;
	minute = minute / 60;
	seconds = seconds % 60;
	if (hour < 10)
		cout << "0" << hour;
	else
		cout << hour;
	cout << ":";
	if (minute < 10)
		cout << "0" << minute;
	else
		cout << minute;
	cout << ":";
	if (seconds < 10)
		cout << "0" << seconds;
	else
		cout << seconds;
	cout << endl;
}
#endif // PAT1026
