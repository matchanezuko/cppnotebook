#include<iostream>
#include<vector>
using namespace std;

class Student {
public:
    //成员变量
    const char* name;
    int age;
    float score;

    //成员函数
    void say() {
        cout << name << "的年龄是" << age << "，成绩是" << score << endl;
    }
};

int main()
{
    Student wei;
    wei.name = "小明";
    wei.age = 20;
    wei.score = 98;
    wei.say();
}
