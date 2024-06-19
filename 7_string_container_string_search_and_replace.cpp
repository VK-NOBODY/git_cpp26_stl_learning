//
// Created by VULCA on 19/6/2024.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

//1.查找
void test_01() {
    string string_01 = "abcdefgde";
    int pos = string_01.find("de");// 返回字符串在字符串中的位置, 找不到返回-1
    if (pos == -1) {
        cout << "string not found" << endl;
    } else {
        cout << "string found pos= " << pos << endl;
    }
    pos = string_01.rfind("de");//rfind和find的區別：rfind從右邊開始找
    cout << "rfind pos= " << pos << endl;
}

//2.替换
void test_02() {
    string string_02 = "abcdefgde";
    cout << "string_02= " << string_02 << endl;
    string_02.replace(1, 3, "123");//replace(start,length,string)
    cout << "string_02= " << string_02 << endl;
    string_02.replace(1, 3, "1111");//從1號位置開始,3個字符,替換成1111
    cout << "string_02= " << string_02 << endl;
}

int main() {
//    test_01();
    test_02();
    return 0;
}