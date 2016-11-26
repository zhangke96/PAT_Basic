/*************************************************************************
	> File Name: 1018.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年11月26日 星期六 21时53分57秒
 ************************************************************************/

#include <iostream>

using namespace std;

int judge(char A, char B) //用来盘点获胜情况,1代表第一个人胜,-1代表第二个人胜，0代表平局
{
    if ((A == 'C' && B == 'J') || (A == 'J' && B == 'B') || (A == 'B' && B == 'C'))
        return 1;
    else if ((B == 'C' && A == 'J') || (B == 'J' && A == 'B') || (B == 'B' && A == 'C'))
        return -1;
    else
        return 0;
}
int main()
{
    int num;
    cin >> num;
    int A[3] = {0}; //用来记录第一个人的剪刀、锤子和布的获胜情况,A[0]代表剪刀、A[1]代表锤子、A[2]代表布
    int B[3] = {0};
    int resultA[3] = {0}; //分别代表甲的胜平负
    int resultB[3] = {0};
    char inputA, inputB;
    int result;
    for (int i = 0; i < num; ++i)
    {
        cin >> inputA >> inputB;
        result = judge(inputA, inputB);
        if (result == 1)
        {
            ++resultA[0];
            ++resultB[2];
            if (inputA == 'J')
                ++A[0];
            else if (inputA == 'C')
                ++A[1];
            else
                ++A[2];
        }
        else if (result == -1)
        {
            ++resultB[0];
            ++resultA[2];
            if (inputB == 'J')
                ++B[0];
            else if (inputB == 'C')
                ++B[1];
            else
                ++B[2];
        }
        else if (result == 0)
        {
            ++resultA[1];
            ++resultB[1];
        }
    }
    cout << resultA[0] << " " << resultA[1] << " " << resultA[2] << endl;
    cout << resultB[0] << " " << resultB[1] << " " << resultB[2] << endl;
    int AMax = 0;
    int BMax = 0;
    for (int i = 1; i < 3; ++i)
    {
        if (A[i] >= A[AMax])
            AMax = i;
        if (B[i] >= B[BMax])
            BMax = i;
    }
    char three[3] = {'J', 'C', 'B'};
    cout << three[AMax] << " " << three[BMax] << endl;
}
