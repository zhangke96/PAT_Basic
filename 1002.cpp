/*************************************************************************
	> File Name: 1002.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年08月17日 星期三 12时52分24秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
int main()
{
    std::string pinyin[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    std::string a;
    a.reserve(100);
    std::cin >> a;
    int input = 0;
    for(std::string::iterator beg = a.begin(); beg != a.end(); ++beg)
        input += *beg - '0';
    std::string result = std::to_string(input);
    std::cout << pinyin[*result.begin() - '0'];
    for(std::string::iterator beg = result.begin() + 1; beg != result.end(); ++beg)
        std::cout << " " << pinyin[*beg- '0'];
    std::cout << std::endl;
}
