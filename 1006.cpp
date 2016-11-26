/*************************************************************************
	> File Name: 1006.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年08月31日 星期三 23时20分13秒
 ************************************************************************/

#include<iostream>
int main()
{
    int input;
    std::cin >> input;
    int a = input / 100;
    int b = (input - a * 100) / 10;
    int c = input - a * 100 - b * 10;
    for(int i = 0; i < a; ++i)
        std::cout << "B";
    for(int i = 0; i < b; ++i)
        std::cout << "S";
    for(int i = 1; i <= c; ++i)
        std::cout << i;
    return 0;
}
