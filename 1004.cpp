/*************************************************************************
	> File Name: 1004.cpp
	> Author:ZhangKe 
	> Mail:ch.zhangke@gmail.com 
	> Created Time: 2016年08月31日 星期三 16时19分13秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
class student
{
private:
    std::string name;
    std::string id;
    int score;
public:
    student(std::string n, std::string i, int s) : name(n), id(i), score(s) {}
    void print()
    {
        std::cout << name << " " << id << std::endl;
    }
    bool operator<(const student& rhs)
    {
        return score < rhs.score;
    }
};
int main()
{
    int num;
    std::cin >> num;
    std::vector<student> students;
    students.reserve(num);
    std::string name, id;
    int score;
    for(int i = 0; i != num; ++i)
    {
        std::cin >> name >> id >> score;
        students.emplace_back(name, id, score);
    }
    std::sort(students.begin(), students.end());
    (students.end() - 1)->print();
    students.begin()->print();
}
