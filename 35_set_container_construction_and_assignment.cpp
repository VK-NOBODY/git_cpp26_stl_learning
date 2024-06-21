//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "set"

using namespace std;

void cout_set(const set<int> &temp_set) {
    for (set<int>::const_iterator s = temp_set.begin(); s != temp_set.end(); s++) {
        cout << *s << " ";
    }
    cout << endl;
}

//set容器構造和賦值
void test_01() {
    set<int> set_01;
    //插入數據 只有insert方式
    set_01.insert(10);
    set_01.insert(20);
    set_01.insert(30);
    set_01.insert(40);
    set_01.insert(30);//重複元素會被忽略

    //遍歷set容器
    //set容器特點: 所有元素插入時候都會自動排序
    //set容器不能有重複元素
    cout_set(set_01);

    //拷貝構造
    set<int> set_02(set_01);
    cout_set(set_02);

    //賦值
    set<int> set_03;
    set_03 = set_02;
    cout_set(set_03);
}

int main() {
    test_01();
    return 0;
}