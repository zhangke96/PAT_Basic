/*************************************************************************
	> File Name: 1069.cpp
	> Author: ZhangKe 
	> Mail: zhangke960808@163.com
	> Created Time: Fri 17 Mar 2017 05:55:52 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>

int main()
{
    int m, n, s;
    std::string *names;
    
    std::cin >> m;
    std::cin >> n >> s;
    if (s > m)
    {
        std::cout << "Keep going..." << std::endl;
        return 0;
    }
    names = new std::string[m];
    for (int i = 0; i < m; ++i)
        std::cin >> names[i];

    std::vector<std::string> wins;
    wins.reserve(m);

    bool exist = false;
    while (s <= m)
    {
        exist = false;
        for (std::vector<std::string>::iterator beg = wins.begin(); beg != wins.end(); ++beg)
        {
            if (*beg == names[s - 1])
            {
                exist = true;  // exist and continue to check the next 
                break;
            }
        }
        if (!exist)
        {
            wins.push_back(names[s - 1]);
            std::cout << names[s - 1] << std::endl;
            s += n;
        }
        else
            s += 1;
    }
    if (wins.size() == 0)
        std::cout << "Keep going..." << std::endl;
    return 0;
}
