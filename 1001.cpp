/*************************************************************************
	> File Name: 1001.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年08月16日 星期二 21时38分58秒
 ************************************************************************/

#include<iostream>
int main()
{
    int n;
    int step = 0;
    std::cin >> n;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
            ++step;
        }
        else
        {
            n = 3 * n + 1;
            n /= 2;
            ++step;
        }
    }
    std::cout << step << std::endl;
}
