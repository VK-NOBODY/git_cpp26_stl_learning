//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "list"

using namespace std;

class Person {
public:
    Person(string name, int age, int height) {
        this->my_name = name;
        this->my_age = age;
        this->my_height = height;
    }

    string my_name;//姓名
    int my_age;//年齡
    int my_height;//身高
};

//指定排序規則
bool compare_person_age(Person &p1, Person &p2) {
    if (p1.my_age == p2.my_age) {
        return p1.my_height > p2.my_height;
    } else {
        return p1.my_age > p2.my_age;
    }
}

void test_01() {
    list<Person> person_list;//創建一個list容器
    Person person_01("劉備", 35, 175);
    Person person_02("曹操", 45, 180);
    Person person_03("孫權", 50, 170);
    Person person_04("周瑜", 50, 175);
    Person person_05("張飛", 60, 160);
    Person person_06("關羽", 65, 200);
    //插入數據
    person_list.push_back(person_01);
    person_list.push_back(person_02);
    person_list.push_back(person_03);
    person_list.push_back(person_04);
    person_list.push_back(person_05);
    person_list.push_back(person_06);
    for (list<Person>::iterator it = person_list.begin(); it != person_list.end(); it++) {
//        cout << "姓名：" << (*it).my_name << " 年齡：" << (*it).my_age << " 身高：" << (*it).my_height << endl;
        cout << "姓名：" << it->my_name << " 年齡：" << it->my_age << " 身高：" << it->my_height << endl;
    }
    cout << "=============================================" << endl;
    //排序後
    cout << "排序後: " << endl;
    person_list.sort(compare_person_age);
    for (list<Person>::iterator it = person_list.begin(); it != person_list.end(); it++) {
        cout << "姓名：" << it->my_name << " 年齡：" << it->my_age << " 身高：" << it->my_height << endl;
    }
}

int main() {
    test_01();
    return 0;
}