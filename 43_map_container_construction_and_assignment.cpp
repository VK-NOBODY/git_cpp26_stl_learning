//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "map"

using namespace std;

void cout_map(map<int, int> &temp_map) {
    for (map<int, int>::iterator it = temp_map.begin(); it != temp_map.end(); it++) {
        cout << "key:" << it->first << " value:" << it->second << endl;
    }
    cout << endl;
}

void test_01() {
    map<int, int> map_01;
    //插入元素
    map_01.insert(make_pair(1, 10));
    map_01.insert(make_pair(2, 20));
    map_01.insert(make_pair(3, 30));
    map_01.insert(make_pair(4, 40));
    map_01.insert(make_pair(5, 50));
    //輸出map
    //按key值排序
    cout_map(map_01);
    //迭代器賦值
    map<int, int> map_02(map_01.begin(), map_01.end());
    cout_map(map_02);
    //拷貝構造
    map<int, int> map_03(map_02);
    cout_map(map_03);
    //operator=賦值
    map<int, int> map_04;
    map_04 = map_03;
    cout_map(map_04);
}

int main() {
    test_01();
    return 0;
}