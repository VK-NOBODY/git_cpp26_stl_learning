//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "queue"

using namespace std;

class Person {
public:
    Person() {
    }

    Person(string temp_name, int temp_age) {
        this->my_name = temp_name;
        this->my_age = temp_age;
    }

    string my_name;
    int my_age;
};

void test_01() {
    // 创建队列
    queue<Person> queue_01;
    //準備數據
    Person person_01("唐僧", 30);
    Person person_02("孫悟空", 1000);
    Person person_03("豬八戒", 900);
    Person person_04("沙僧", 800);
    //入隊
    queue_01.push(person_01);
    queue_01.push(person_02);
    queue_01.push(person_03);
    queue_01.push(person_04);
    while (!queue_01.empty()) {
        //出隊
        //隊頭
        Person person = queue_01.front();
        cout << "隊頭:   姓名：" << person.my_name << " 年齡：" << person.my_age << endl;
        //隊尾
        Person person_tail = queue_01.back();
        cout << "隊尾：姓名：" << person_tail.my_name << " 年齡：" << person_tail.my_age << endl;
        cout << endl;
        queue_01.pop();
    }
}

int main() {
    test_01();
    return 0;
}