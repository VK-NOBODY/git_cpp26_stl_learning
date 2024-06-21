//
// Created by VULCA on 21/6/2024.
//
#include "iostream"

using namespace std;

//pair對組的創建
void test_01() {
    //第一種方式
    pair<string, int> pair_01("Nobody", 20);
    cout << "姓名: " << pair_01.first << " 年齡: " << pair_01.second << endl;
    //第二種方式
    pair<string, int> pair_02 = make_pair("Somebody", 40);
    cout << "姓名: " << pair_02.first << " 年齡: " << pair_02.second << endl;
}

int main() {
    test_01();
    return 0;
}