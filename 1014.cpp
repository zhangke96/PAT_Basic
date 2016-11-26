/*************************************************************************
	> File Name: 1014.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年11月19日 星期六 16时02分59秒
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;
int main(void)
{
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;

    int i = 0;
    int j = 0;
    char day = '0';
    char hour = 0;
    char mintue = 0;
    for (; i < str1.size(); ++i)
    {
        if (str1[i] >= 'A' && str1[i] <= 'G')
        {
            for (j = 0; j < str2.size(); ++j)
            {
                if (str1[i] == str2[j] && i == j)
                {
                    day = str1[i];
                    break;
                }
            }
        }
        if (day != '0')
            break;
    }
    /*
    for (; i < str1.size(); ++i)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            for (j = 0; j < str2.size(); ++j)
            {
                if (str1[i] == str2[j])
                {
                    hour = str1[i];
                    break;
                }
            }
        }
        if (hour != '0')
            break;
    }
    */
    int k;
    int num = 0;
    ++i;
    ++j;
    for (; i < str1.size(); ++i)
    {
        if (((str1[i] <= '9' && str1[i] >= '0') || (str1[i] <= 'N' && str1[i] >= 'A')))
        {
        for (k = j; k < str2.size(); ++k)
        {
            if (str2[k] == str1[i] && k == i)
            {
                hour = str2[k];
                break;
            }
        }
        if (hour != 0)
        {
            break;
       //     ++num;
        }}
    }
    int size = (str3.size() < str4.size() ? str3.size(): str4.size());

    for (i = 0; i < size; ++i)
    {
        if (str3[i] == str4[i])
        {
            if ((str3[i] >= 'a' && str3[i] <= 'z') || (str3[i] >= 'A' && str3[i] <= 'Z'))
            {
                mintue = str3[i];
                break;
            }
        }
        if (mintue != 0)
            break;
    }

    char week[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    cout << week[day - 'A'] << " ";

    if (hour <= '9' && hour >= '0')
        cout << "0" <<hour << ":";
    else
        cout << (hour - 'A' + 10) << ":";

    if (i <= 9)
        cout << "0" << i << endl;
    else
        cout << i << endl;

//cout << "hour" << hour << endl;
//cout << num << endl;
}
