//
// Created by VULCA on 19/6/2024.
//
#include "iostream"

using namespace std;

//string 字符存取
void test_01() {
    string string_01 = "hello";
//    cout << "string_01= " << string_01 << endl;

//1.通過[]訪問單個字符
//    for (int i = 0; i < string_01.size(); i++) {
//        cout << "string_01[" << i << "]=" << string_01[i] << endl;
//    }

//2.通過at訪問單個字符
//    for (int i = 0; i < string_01.size(); i++) {
//        cout << "string_01.at(" << i << ")=" << string_01.at(i) << endl;
//    }

//修改單個字符
    string_01[0] = 'H';
    cout << "string_01 =" << string_01 << endl;
    string_01.at(1) = 'E';
    cout << "string_01 =" << string_01 << endl;

}

int main() {
    test_01();
    return 0;
}