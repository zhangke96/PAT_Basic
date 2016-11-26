/*************************************************************************
	> File Name: 1007.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年09月01日 星期四 12时39分52秒
 ************************************************************************/

#include<iostream>
#include<cmath>

int main()
{
    int input;
    std::cin >> input;
    int first;
    int second;
    int num = 0;
    int num2 = 0;
    bool flag = false;
    if(input <= 4)
    {
        std::cout << num2;
        return 0;
    }
    for(int i = 3; i <= input; ++i)
    {
        int temp = sqrt(i);
        flag = false;
        for(int j = 2; j <= temp; ++j)
        {
            if(i % j == 0)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            if(num % 2 == 0)
                first = i;
            else
                second = i;
            ++num;
        if(num >= 2)
        {
            if(num % 2 == 0)
            {
                if((second - first) == 2)
                    ++num2;
            }
            else
            {
                if((first - second) == 2)
                    ++num2;
            }
        }
}
        
    }
    std::cout << num2;
    return 0;
}
