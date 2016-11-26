/*************************************************************************
	> File Name: 1008.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年09月01日 星期四 16时46分37秒
 ************************************************************************/

#include<iostream>
int main()
{
    int size;
    std::cin >> size;
    int off;
    std::cin >> off;
    off = off % size;
    int a[size];
    for(int i = 0; i != size; ++i)
    {
        std::cin >> a[i];
    }
    for(int i = size - off; i != size; ++i)
    {
        std::cout << a[i];
        if((i - size + off) != size - 1)
            std::cout << " ";
    }
    for(int i = 0; i != size - off; ++i)
    {
        std::cout << a[i];
        if(i != (size -off -1))
            std::cout << " ";
    }
    return 0;
}
