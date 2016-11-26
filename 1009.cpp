/*************************************************************************
	> File Name: 1009.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年09月01日 星期四 18时26分27秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>

int main()
{
    std::string input;
    std::vector<std::string> a;
    a.reserve(80);
    while(std::cin >> input)
    {
        a.push_back(input);
    }
    for(auto beg = a.rbegin(); beg != a.rend(); ++beg)
    {
        if(beg != a.rend() - 1)
            std::cout << *beg << " ";
        else
            std::cout << *beg;
    }
    return 0;
}
