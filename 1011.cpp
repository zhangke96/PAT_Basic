/*************************************************************************
	> File Name: 1011.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年11月19日 星期六 13时40分58秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin >> num;
    long long a, b, c;
    for (int i = 0; i < num; ++i)
    {
        cin >> a >> b >>c;
        cout << "Case #" << i + 1 << ": ";
        if (a + b > c)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}
