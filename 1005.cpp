/*************************************************************************
	> File Name: 1005.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年08月31日 星期三 17时37分42秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int input;
    std::cin >> input;
    std::vector<int> inp;
    int input2;
    while(std::cin >> input2)
        inp.push_back(input2);
    std::vector<int> l;
    while(input != 1)
    {
        if(input % 2 == 0)
            input = input / 2;
        else
            input = (3 * input + 1) / 2;
        l.push_back(input);
    }
    for(auto i : l)
        std::cout << i << " ";
    std::cout << std::endl;
    std::vector<int> result;
    for(auto i : inp)
    {
        if(find(l.begin(), l.end(), i) == l.end())
            result.push_back(i);
    }
    if(find(l.begin(), l.end(), 1) == l.end())
            result.push_back(input);
    std::sort(result.begin(), result.end(), [](const int a, const int b) { return a > b; });
    for(int i = 0; i != result.size(); ++i)
    {
        if(i != 0)
            std::cout << " ";
        std::cout << result[i];
    }
}
