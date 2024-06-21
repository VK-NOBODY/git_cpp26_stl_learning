//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "set"

using namespace std;

void cout_set(const set<int> &temp_set) {
    for (set<int>::const_iterator s = temp_set.begin(); s != temp_set.end(); ++s) {
        cout << *s << " ";
    }
    cout << endl;
}

void test_01() {
    set<int> set_01;
    //插入數據
    set_01.insert(10);
    set_01.insert(30);
    set_01.insert(20);
    set_01.insert(40);

    set<int> set_02;
    set_02.insert(100);
    set_02.insert(300);
    set_02.insert(200);
    set_02.insert(400);
    //打印容器
    cout_set(set_01);
    //判斷是否為空
    if (set_01.empty()) {
        cout << "set_01 is empty" << endl;
    } else {
        cout << "set_01 is not empty" << endl;
        cout << "set_01 size is " << set_01.size() << endl;
    }
}

void test_02() {
    set<int> set_01;
    //插入數據
    set_01.insert(10);
    set_01.insert(30);
    set_01.insert(20);
    set_01.insert(40);

    set<int> set_02;
    set_02.insert(100);
    set_02.insert(300);
    set_02.insert(200);
    set_02.insert(400);
    //打印容器
    //打印交換前
    cout_set(set_01);
    cout_set(set_02);
    //打印交換後
    set_01.swap(set_02);
    cout_set(set_01);
    cout_set(set_02);
    //判斷是否為空
    if (set_01.empty()) {
        cout << "set_01 is empty" << endl;
    } else {
        cout << "set_01 is not empty" << endl;
        cout << "set_01 size is " << set_01.size() << endl;
    }
    if (set_02.empty()) {
        cout << "set_02 is empty" << endl;
    } else {
        cout << "set_02 is not empty" << endl;
        cout << "set_02 size is " << set_02.size() << endl;
    }
}

int main() {
//    test_01();
    test_02();
    return 0;
}