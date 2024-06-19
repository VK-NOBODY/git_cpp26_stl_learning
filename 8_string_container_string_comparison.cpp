//
// Created by VULCA on 19/6/2024.
//
#include "iostream"
#include "vector"

using namespace std;

void test_01() {
    string string_01 = "hello";
    string string_02 = "xello";
    if (string_01.compare(string_02) == 0) {
        cout << "string_01等於string_02" << endl;
    } else if (string_01.compare(string_02) > 0) {
        cout << "string_01大於string_02" << endl;
    } else {
        cout << "string_01小於string_02" << endl;
    }
}

int main() {
    test_01();
    return 0;
}