/*************************************************************************
	> File Name: 1010.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年09月02日 星期五 08时37分53秒
 ************************************************************************/

#include<iostream>
#include<vector>

int main()
{
    int input;
    std::vector<int> a;
    while(std::cin >> input)
        a.push_back(input);
    for(auto beg = a.begin(); beg != a.end(); ++++beg)
    {
        //if(*(beg + 1) && *(beg))
        if(*(beg + 1))
        {
            std::cout << *beg * *(beg + 1) << " " << *(beg + 1) - 1;
            if(!(((beg == a.end() - 4) && ((*(beg + 3) == 0) || *(beg + 2) == 0))  || (beg == a.end() - 2)))
                std::cout << " ";
        }
    }
    return 0;
}
