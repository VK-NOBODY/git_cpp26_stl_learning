//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "set"

using namespace std;

class Person {
public:
    Person(string temp_name, int temp_age) {
        this->my_name = temp_name;
        this->my_age = temp_age;
    }

    string my_name;
    int my_age;
};

class MyCompare {
public:
    bool operator()( const Person &p1,const Person &p2)const {
        if (p1.my_age == p2.my_age) {
            return p1.my_name > p2.my_name;
        } else {
            return p1.my_age > p2.my_age;
        }
    }
};

void test_01() {
    //自定義數據類型 都會指定排序規則
    set<Person, MyCompare> set_01;
    Person person_01("劉備", 24);
    Person person_02("張飛", 22);
    Person person_03("關羽", 20);
    Person person_04("趙雲", 25);
    set_01.insert(person_01);
    set_01.insert(person_02);
    set_01.insert(person_03);
    set_01.insert(person_04);
    for (set<Person>::iterator it = set_01.begin(); it != set_01.end(); it++) {
        cout << (*it).my_name << " " << (*it).my_age << endl;
    }
}

int main() {
    test_01();
    return 0;
}