/*************************************************************************
	> File Name: 1045.cpp
	> Author: ZhangKe 
	> Mail: zhangke960808@163.com
	> Created Time: Sun 19 Mar 2017 10:07:39 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
    int *input;
    int size;
    std::cin >> size;
    input = new int[size];
    for (int i = 0; i < size; ++i)
        std::cin >> input[i];

    std::vector<int> result;
    result.reserve(size);
    int *temp = new int[size];
    for (int i = 0; i < size; ++i)
        temp[i] = input[i];
    std::sort(temp, temp + size);
    int max = input[0];
    for (int i = 0; i < size; ++i)
    {

        if (temp[i] == input[i] && (input[i] >= max))
            result.push_back(input[i]);
        if (input[i] > max)
            max = input[i];
    }

    std::cout << result.size() << std::endl;
//    std::sort(result.begin(), result.end());
    if (result.size() <= 1)
    {
        for (auto c : result)
            std::cout << c;
    }
    else
    {
        std::cout << result.front();
        for (std::vector<int>::iterator beg = ++result.begin(); beg != result.end(); ++beg)
            std::cout << " " << *beg;
    }
    if (result.size())
        std::cout << std::endl;
    return 0;
}
