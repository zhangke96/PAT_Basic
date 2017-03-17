/*************************************************************************
	> File Name: 1070.cpp
	> Author: ZhangKe 
	> Mail: zhangke960808@163.com
	> Created Time: Fri 17 Mar 2017 06:46:04 PM CST
 ************************************************************************/

#include <iostream>
//#include <cassert>

void quickSort(int *a, int lo, int hi);

/*
bool isSorted(int *a, int size)
{
    for (int i = 0; i < size - 1; ++i)
        if (a[i] > a[i + 1])
            return false;
    return true;
}
*/
int main()
{
    int n;
    std::cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> array[i];
    quickSort(array, 0, n - 1);
//    assert(isSorted(array, n));
    int result = (array[0] + array[1]) / 2;
    for (int i = 2; i < n; ++i)
    {
        result = (result + array[i]) / 2;
    }
    std::cout << result << std::endl;
}

void quickSort(int *a, int lo, int hi)
{
    if (lo >= hi)
        return;
    int standard = a[lo]; // standard
    int i = lo;
    int j = hi + 1;
    while (true)
    {
         while (a[++i] <= standard)
            if(i >= hi)
                break;
        while (a[--j] >= standard)
            if (j <= lo)
                break;
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
            break;
    }   
    int temp = a[lo];
    a[lo] = a[j];
    a[j] = temp;
    quickSort(a, lo, j - 1);
    quickSort(a, j + 1, hi);
}
