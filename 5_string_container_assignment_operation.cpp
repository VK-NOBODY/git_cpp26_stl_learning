//
// Created by VULCA on 18/6/2024.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void test_01() {
    string string_01;
    string_01 = "hello world";
    cout << "string_01 = " << string_01 << endl;

    string string_02;
    string_02 = string_01;
    cout << "string_02 = " << string_02 << endl;

    string string_03;
    string_03 = 'a';
    cout << "string_03 = " << string_03 << endl;

    string string_04;
    string_04.assign("hello world");
    cout << "string_04 = " << string_04 << endl;

    string string_05;
    string_05.assign("hello world", 5);
    cout << "string_05 = " << string_05 << endl;

    string string_06;
    string_06.assign(string_05);
    cout << "string_06 = " << string_06 << endl;

    string string_07;
    string_07.assign(10, 'w');
    cout << "string_07 = " << string_07 << endl;
}

int main() {
    test_01();
    return 0;
}