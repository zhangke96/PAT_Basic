/*************************************************************************
	> File Name: 1003.cpp
	> Author: ZhangKe 
	> Mail: zhangke960808@163.com
	> Created Time: Sun 11 Dec 2016 08:33:42 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    std::vector<std::string> a;
    std::vector<bool> b;
    int num;
    std::cin >> num;
    a.reserve(num);
    b.reserve(num);

    std::string input;
    while (std::cin >> input)
        a.push_back(input);
    for (auto c : a)
    {
        bool flag = false;
        int first_P = -1;
        bool P = false;
        int first_T = -1;
        bool T = false;
        for (int i = 0; i < c.size(); ++i)
        {
            if (c[i] == 'A')
                continue;
            else if (c[i] == 'P')
            {
                if (!P)
                {
                    P = true;
                    first_P = i;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            else if (c[i] == 'T')
            {
                if (!T)
                {
                    T = true;
                    first_T = i;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                flag = true;
                break;
            }
                
        }
        if (first_T <= (first_P + 1))
        {
            flag = true;   
        }
        if (flag)
        {
            b.push_back(false);
            continue;
        }
        if ( first_P != 0 && (first_T != c.size()) &&(c.size() - first_T) >= (first_P) && ((c.size() - first_T)/(first_P) >= (first_T - first_P -1)) )
        {
            b.push_back(true);
            flag = true;
        }
        if (first_P == 0 && first_T == c.size() && (first_T - first_P) <= 3)
        {
            b.push_back(true);
            flag = true;
        }
        if (!flag)
        b.push_back(false);

    }
    for (auto c : b)
    {
        if (c == false)
            std::cout << "NO" << std::endl;
        else
            std::cout << "YES" << std::endl;
    }

    return 0;
}
