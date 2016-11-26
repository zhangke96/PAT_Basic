/*************************************************************************
	> File Name: 1013.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年11月19日 星期六 14时21分59秒
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;
int main(void)
{
    int begNum, endNum;
    cin >> begNum >> endNum;

    vector<int> result;
    result.reserve(endNum);
    int i = 0;
    int now = 2;
    while (i != endNum)
    {
        int j = 2;
        for ( ; j * j <= now; ++j)
        {
            if (now % j == 0)
                break;
        }
        if (now % j == 0 && now != j)
        {
            ++now;
            continue;
        }
        else
        {
            result.push_back(now);
            ++now;
            ++i;
        }
    }
    for (int i = begNum - 1; i != endNum; ++i)
    {
        if (i == endNum - 1)
            cout << result[i] << endl;
        else if ((i - begNum + 1) % 10 != 9 )
            cout << result[i] << " ";
        else if ((i - begNum + 1) % 10 == 9)
            cout << result[i] << endl;
    }
}
