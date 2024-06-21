//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "list"
#include "algorithm"

using namespace std;

void cout_list(const list<int> &temp_list) {
    for (list<int>::const_iterator l = temp_list.begin(); l != temp_list.end(); l++) {
        cout << *l << " ";
    }
    cout << endl;
}

void test_01() {
    list<int> list_01;
    list_01.push_back(20);
    list_01.push_back(10);
    list_01.push_back(50);
    list_01.push_back(40);
    list_01.push_back(30);

    //反轉前
    cout << "反轉前: ";
    cout_list(list_01);

    //反轉後
    list_01.reverse();
    cout << "反轉後: ";
    cout_list(list_01);
}

bool my_compare(int a, int b) {
    return a > b;
}

void test_02() {
    list<int> list_02;
    list_02.push_back(20);
    list_02.push_back(10);
    list_02.push_back(50);
    list_02.push_back(40);
    list_02.push_back(30);

    //排序前
    cout << "排序前: ";
    cout_list(list_02);

    //所有不支持隨機訪問的容器，包括list，無法使用標准算法sort函數進行排序
    //不支持隨機訪問迭代器的容器,內部會提供對應一些算法
//    sort(list_02.begin(), list_02.end());
    list_02.sort();//默認排序規則 從小到大 升序
    cout << "排序後: ";
    cout_list(list_02);
    list_02.sort(my_compare);//自定義排序規則 從大到小
    cout << "排序後: ";
    cout_list(list_02);
}

int main() {
//    test_01();
    test_02();
    return 0;

}