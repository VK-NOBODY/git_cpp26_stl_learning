//
// Created by VULCA on 18/6/2024.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void test_01() {
    string string_01 = "我";
    string_01 += "愛玩遊戲";
    cout << string_01 << endl;
    string_01 += ":";
    cout << string_01 << endl;
    string string_02 = " LOL DNF";
    string_01 += string_02;
    cout << string_01 << endl;
    string string_03 = "I";
    string_03.append(" love ");
    cout << string_03 << endl;
    string_03.append("game abcde", 4);
    cout << string_03 << endl;
//    string_03.append(string_02);
//    cout << string_03 << endl;
//    string_03.append(string_02, 0, 4);
//    cout << string_03 << endl;
    string_03.append(string_02, 4, 4);
    cout << string_03 << endl;
}

int main() {
    test_01();
    return 0;
}