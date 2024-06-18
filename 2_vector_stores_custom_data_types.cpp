//
// Created by VULCA on 18/6/2024.
//
#include "iostream"
#include "vector"
#include "algorithm"

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
    //容器存放自定義數據類型
    vector<Person> v;
    //實例化對象
    Person person_01("Mike", 18);
    Person person_02("Tom", 28);
    Person person_03("Jim", 38);
    Person person_04("Tony", 48);
    Person person_05("Jerry", 58);
    //向容器中添加數據
    v.push_back(person_01);
    v.push_back(person_02);
    v.push_back(person_03);
    v.push_back(person_04);
    v.push_back(person_05);
    for (vector<Person>::iterator it_begin = v.begin(); it_begin != v.end(); it_begin++) {
//        cout<<"姓名: "<<(*it_begin).my_name<<" 年齡:"<<(*it_begin).my_age<<endl;
        cout << "姓名:" << it_begin->my_name << " 年齡:" << it_begin->my_age << endl;
    }
}

void test_02() {
    //容器中存放自定義數據類型指針
    vector<Person *> v;
    //實例化對象
    Person person_01("Mike", 18);
    Person person_02("Tom", 28);
    Person person_03("Jim", 38);
    Person person_04("Tony", 48);
    Person person_05("Jerry", 58);
    //向容器中添加數據地址
    v.push_back(&person_01);
    v.push_back(&person_02);
    v.push_back(&person_03);
    v.push_back(&person_04);
    v.push_back(&person_05);
    for (vector<Person *>::iterator it_begin = v.begin(); it_begin != v.end(); it_begin++) {
//        cout << "姓名:" << (**it_begin).my_name << " 年齡:" << (**it_begin).my_age << endl;
//        cout << "姓名:" << (*it_begin)->my_name << " 年齡:" << (*it_begin)->my_age << endl;
        Person *p = *it_begin;
        cout << "姓名:" << p->my_name << " 年齡:" << p->my_age << endl;
    }
}

int main() {
//    test_01();
    test_02();
    return 0;
}