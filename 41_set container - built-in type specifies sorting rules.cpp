//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "set"

using namespace std;

class MyCompare {
public:
    bool operator()(int a, int b) const {
        return a > b;
    }
};

void test_01() {
    set<int> set_01;
    set_01.insert(10);
    set_01.insert(40);
    set_01.insert(20);
    set_01.insert(50);
    set_01.insert(30);
    for (set<int>::iterator set_iterator = set_01.begin(); set_iterator != set_01.end(); set_iterator++) {
        cout << *set_iterator << " ";
    }
    cout << endl;
    //指定排序規則為從大到小
    set<int, MyCompare> set_02;
    set_02.insert(10);
    set_02.insert(40);
    set_02.insert(20);
    set_02.insert(50);
    set_02.insert(30);
    for (set<int, MyCompare>::iterator set_iterator = set_02.begin(); set_iterator != set_02.end(); set_iterator++) {
        cout << *set_iterator << " ";
    }
    cout << endl;
}

int main() {
    test_01();
    return 0;
}