//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "list"

using namespace std;

void cout_list(const list<int> &temp_list) {
    for (list<int>::const_iterator l = temp_list.begin(); l != temp_list.end(); l++) {
        cout << *l << " ";
    }
    cout << endl;
}

void test_01() {
    list<int> list_01;
    list_01.push_back(10);
    list_01.push_back(20);
    list_01.push_back(30);
    list_01.push_back(40);
    cout_list(list_01);

    list<int> list_02;//operator=賦值
    list_02 = list_01;
    cout_list(list_02);

    list<int> list_03;//按區間賦值
    list_03.assign(list_01.begin(), list_01.end());
    cout_list(list_03);

    list<int> list_04;//n個elements賦值
    list_04.assign(5, 100);
    cout_list(list_04);
}

void test_02() {
    list<int> list_05;
    list_05.push_back(10);
    list_05.push_back(20);
    list_05.push_back(30);
    list_05.push_back(40);

    list<int> list_06;
    list_06.assign(10, 100);

    cout << "交換前 " << "list_05:";
    cout_list(list_05);
    cout << "list_06:";
    cout_list(list_06);
    cout << endl;
    list_05.swap(list_06);
    cout << "交換後 " << "list_05:";
    cout_list(list_05);
    cout << "list_06:";
    cout_list(list_06);
    cout << endl;
}

int main() {
//    test_01();
    test_02();
    return 0;
}