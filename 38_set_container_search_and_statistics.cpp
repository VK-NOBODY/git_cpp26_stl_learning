//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "set"

using namespace std;

//set容器 查找和統計
void test_01() {
    set<int> set_01;
    //插入數據
    set_01.insert(10);
    set_01.insert(30);
    set_01.insert(20);
    set_01.insert(10);

    set<int>::const_iterator set_01_it = set_01.find(30);
    if (set_01_it != set_01.end()) {
        cout << "找到30" << endl;
    } else {
        cout << "未找到30" << endl;
    }
    set<int>::const_iterator set_01_it_01 = set_01.find(300);
    if (set_01_it_01 != set_01.end()) {
        cout << "找到300" << endl;
    } else {
        cout << "未找到300" << endl;
    }
}

void test_02() {
    //查找
    set<int> set_01;
    //插入數據
    set_01.insert(10);
    set_01.insert(30);
    set_01.insert(30);
    set_01.insert(30);
    set_01.insert(20);
    set_01.insert(10);

    //統計30的個數
    int number = set_01.count(30);//對set而言,無論插多少個30,統計都會返回1
    cout << "30的個數為" << number << endl;
}

int main() {
//    test_01();
    test_02();
    return 0;
}