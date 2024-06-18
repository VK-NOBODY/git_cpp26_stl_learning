//
// Created by VULCA on 18/6/2024.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void test_01() {
    string string_01;
    const char *string_02 = "hello world";
    string string_03(string_02);
    cout << string_03 << endl;
    string string_04(string_03);
    cout << string_04 << endl;
    string string_05(10, 'a');
    cout << string_05 << endl;
}

int main() {
    test_01();
    return 0;
}