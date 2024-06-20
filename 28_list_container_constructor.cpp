//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "list"

using namespace std;

void cout_list(const list<int> &temp_list) {
    for (list<int>::const_iterator it = temp_list.begin(); it != temp_list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test_01() {
    //創建list容器
    list<int> list_01;
    //添加數據
    list_01.push_back(10);
    list_01.push_back(20);
    list_01.push_back(30);
    list_01.push_back(40);
    //遍歷容器
    cout_list(list_01);
    //區間方式構造
    list<int> list_02(list_01.begin(), list_01.end());
    cout_list(list_02);
    //拷貝構造
    list<int> list_03(list_02);
    cout_list(list_03);
    //n個elements
    list<int> list_04(10, 1000);
    cout_list(list_04);

}

int main() {
    test_01();
    return 0;
}