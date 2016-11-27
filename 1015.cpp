/*************************************************************************
	> File Name: 1015.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年11月27日 星期日 21时23分33秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class student
{
private:
    string license;
    int moral;
    int ability;
public:
    student(string aLicense, int moral_score, int ability_score) : license(aLicense), moral(moral_score), ability(ability_score) {}
    friend bool operator>(const student &lhs, const student &rhs)
    {
//        return (lhs.moral + lhs.ability) < (rhs.moral + rhs.ability);
        if ((lhs.moral + lhs.ability) > (rhs.moral + rhs.ability))
            return true;
        else if ((lhs.moral + lhs.ability) == (rhs.moral + rhs.ability))
        {
            if (lhs.moral > rhs.moral)
                return true;
            else if (lhs.moral == rhs.moral)
            {
                return lhs.license < rhs.license;
            }
            else
                return false;
        }
        else
            return false;
    }
    friend ostream &operator<<(ostream &os, const student &lhs)
    {
        os << lhs.license << " " << lhs.moral << " " << lhs.ability << endl;
        return os;
    }
};

int main()
{
    int size;
    cin >> size;
    vector<student> first;
    vector<student> second;
    vector<student> third;
    vector<student> fourth;
    first.reserve(100);
    second.reserve(100);
    third.reserve(100);
    fourth.reserve(100);

    int L, H;
    cin >> L >> H;

    string tempInput;
    int tempMoralScore;
    int tempAbilityScore;
    int num = 0;
    for (int i = 0; i < size; ++i)
    {
        cin >> tempInput >> tempMoralScore >> tempAbilityScore;
        if ((tempMoralScore >= H) && (tempAbilityScore >= H))
        {
            first.emplace_back(tempInput, tempMoralScore, tempAbilityScore);
            ++num;
        }
        else if ((tempMoralScore >= H) && (tempAbilityScore < H) && (tempAbilityScore >= L))
        {
            second.emplace_back(tempInput, tempMoralScore, tempAbilityScore);
            ++num;
        }
        else if ((tempMoralScore < H) && (tempMoralScore >= L) && (tempAbilityScore < H) && (tempAbilityScore >= L) && tempMoralScore >= tempAbilityScore)
        {
            third.emplace_back(tempInput, tempMoralScore, tempAbilityScore);
            ++num;
        }
        else if ((tempMoralScore >= L) && (tempAbilityScore >= L))
        {
            fourth.emplace_back(tempInput, tempMoralScore, tempAbilityScore);
            ++num;
        }
    }

    sort(first.begin(), first.end(), [](const student &lhs, const student &rhs) {return lhs > rhs;});
    sort(second.begin(), second.end(), [](const student &lhs, const student &rhs) {return lhs > rhs;});
    sort(third.begin(), third.end(), [](const student &lhs, const student &rhs) {return lhs > rhs;});
    sort(fourth.begin(), fourth.end(), [](const student &lhs, const student &rhs) {return lhs > rhs;});

    cout << num << endl;
    for (auto c : first)
        cout << c;
    for (auto c : second)
        cout << c;
    for (auto c : third)
        cout << c;
    for (auto c : fourth)
        cout << c;

    return 0;
}
