//
// Created by VULCA on 22/6/2024.
//
#include "iostream"
#include "map"

using namespace std;

void test_01() {
    map<int, int> map_01;
    map_01.insert(make_pair(1, 10));
    map_01.insert(make_pair(2, 20));
    map_01.insert(make_pair(3, 30));
    map_01.insert(make_pair(3, 30));
    map<int, int>::const_iterator it = map_01.find(3);
    if (it != map_01.end()) {
        cout << "key: " << it->first << " value: " << it->second << endl;
    } else {
        cout << "not found" << endl;
    }
    //統計
    //map容器不允許插入重複的key count函數永遠返回1或者0
    //multimap允許插入重複的key count函數可以返回大於1
    int number = map_01.count(3);
    cout << "number:" << number << endl;
}

int main() {
    test_01();
    return 0;
}