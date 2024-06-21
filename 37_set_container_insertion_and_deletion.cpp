//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "set"

using namespace std;

void cout_set(const set<int> &temp_set) {
    for (set<int>::const_iterator s = temp_set.begin(); s != temp_set.end(); ++s) {
        cout << *s << " ";
    }
    cout << endl;
}

void test_01() {
    set<int> set_01;
    //插入
    set_01.insert(10);
    set_01.insert(30);
    set_01.insert(20);
    set_01.insert(40);
    //遍歷
    cout_set(set_01);
    //刪除
    set_01.erase(set_01.begin());
    cout_set(set_01);

    //刪除重載版本
    set_01.erase(30);
    cout_set(set_01);

    //清空
//    set_01.erase(set_01.begin(),set_01.end());
    set_01.clear();
    cout_set(set_01);
    cout << set_01.size() << endl;
}

int main() {
    test_01();
    return 0;
}