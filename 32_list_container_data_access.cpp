//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "list"

using namespace std;

void test_01() {
    list<int> list_01;
    list_01.push_back(10);
    list_01.push_back(20);
    list_01.push_back(30);
    list_01.push_back(40);

//    list_01[0];  //不可以用[]方式訪問list容器中的元素
//    list_01.at(0); //不可以用at方式訪問list容器中的元素
//原因是list本質鏈表 不是用連續線性空間存儲數據 迭代器也是不支持隨機訪問的
    cout << "第一個元素為: " << list_01.front() << endl;
    cout << "最後一個元素為: " << list_01.back() << endl;

    //驗證迭代器是不支持隨機訪問的
    list<int>::iterator it = list_01.begin();
    ++it;//支持雙向
    --it;
//    it = it + 1; //不支持隨機訪問
}

int main() {
    test_01();
    return 0;
}