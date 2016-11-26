/*************************************************************************
	> File Name: 1016.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年11月26日 星期六 21时16分01秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int compute(char toCompute, int num)
{
    if (num == 0)
        return 0;
    int A = toCompute - '0';
    int sum = 0;
    --num;
    while (num >= 0)
    {
        sum += A * pow(10, num);
        --num;
    }
    return sum;
}
int retNum(string &aStr, char toCompute)
{
    int num = 0;
    for (int i = 0; i != aStr.size(); ++i)
        if (aStr[i] == toCompute)
            ++num;

    return num;
}
int main()
{
    string a,b;
    char c,d;
    cin >> a >> c >> b >> d;
//    int numOfA = retNum
    cout << compute(c, retNum(a, c)) + compute(d, retNum(b, d)) << endl;

}
