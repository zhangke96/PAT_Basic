/*************************************************************************
	> File Name: 1056.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年11月19日 星期六 19时34分34秒
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> input;
    int num, sum = 0;
    int size;
    cin >> size;
    while (cin >> num)
        input.push_back(num);
    for (int i = 0; i < input.size(); ++i)
    {
        for (int j = 0; j < input.size(); ++j)
        {
            if (i != j)
            {
                sum += (input[i] * 10 + input[j]);
            }
        }
    }
    cout << sum << endl;
}
