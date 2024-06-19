//
// Created by VULCA on 19/6/2024.
//
#include "iostream"

using namespace std;

void test_01() {
    string string_01 = "hello";

    //插入
    string_01.insert(1, "111");
    cout << "string_01=" << string_01 << endl;

    //刪除
    string_01.erase(1, 3);
    cout << "string_01=" << string_01 << endl;
}

int main() {
    test_01();
    return 0;
}