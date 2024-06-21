//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "list"

using namespace std;

void cout_list(const list<int> &temp_list) {
    for (list<int>::const_iterator l = temp_list.begin(); l != temp_list.end(); ++l) {
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
    if (list_01.empty()) {
        cout << "list_01 is empty" << endl;
    } else {
        cout << "list_01 is not empty" << endl;
        cout << "list_01 size is " << list_01.size() << endl;
    }
    //resize
    list_01.resize(10, 10000);
    cout_list(list_01);
    list_01.resize(2);
    cout_list(list_01);
}

int main() {
    test_01();
    return 0;
}