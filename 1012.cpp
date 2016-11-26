/*************************************************************************
	> File Name: 1012.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年11月19日 星期六 13时48分59秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void)
{
    int size;
    while (cin >> size)
    {
        vector<int> A1, A2, A3, A4, A5;
        int num;
        for (int i = 0; i < size; ++i)
        {
            cin >> num;
            if (num % 5 == 0 && num % 2 == 0)
                A1.push_back(num);
            else if (num % 5 == 1)
                A2.push_back(num);
            else if (num % 5 == 2)
                A3.push_back(num);
            else if (num % 5 == 3)
                A4.push_back(num);
            else if (num % 5 == 4)
                A5.push_back(num);
        }
        if (A1.empty())
            cout << "N ";
        else
        {
            int sum = 0;
            for (auto c : A1)
                sum += c;
            cout << sum << " ";
        }
        
        if (A2.empty())
            cout << "N ";
        else
        {
            int sum = 0;
            for (int i = 0; i < A2.size(); ++i)
            {
                if (i % 2 == 0)
                    sum += A2[i];
                else
                    sum -= A2[i];
            }
            cout << sum << " ";
        }

        if (A3.empty())
            cout << "N ";
        else
            cout << A3.size() << " ";

        if (A4.empty())
            cout << "N ";
        else
        {
            double sum = 0;
            for (auto c : A4)
                sum += (double)c;
            printf("%.1lf ", sum/A4.size());
        }

        if (A5.empty())
            cout << "N" << endl;
        else
        {
            sort(A5.begin(), A5.end(), [](const int a, const int b){ return a > b; });
            cout << *A5.begin() << endl;
        }
    }
}
