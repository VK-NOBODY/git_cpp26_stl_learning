//
// Created by VULCA on 21/6/2024.
//
#include"iostream"
#include "set"

using namespace std;

void test_01() {
    set<int> set_01;
    set_01.insert(10);
    pair<set<int>::iterator, bool> result = set_01.insert(10);
    if (result.second) {
        cout << "first times insert success" << endl;
    } else {
        cout << "first times insert failed" << endl;
    }
    result = set_01.insert(10);
    if (result.second) {
        cout << "second times insert success" << endl;
    } else {
        cout << "second times insert failed" << endl;
    }

    multiset<int> multiset_01;
    //允許插入重複值
    multiset_01.insert(10);
    multiset_01.insert(10);
    multiset_01.insert(10);
    multiset_01.insert(10);

    for (multiset<int>::iterator it = multiset_01.begin(); it != multiset_01.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    test_01();
    return 0;
}