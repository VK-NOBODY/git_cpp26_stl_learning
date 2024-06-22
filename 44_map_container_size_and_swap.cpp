//
// Created by VULCA on 22/6/2024.
//
#include "iostream"
#include "map"

using namespace std;

//map容器 大小和交換
//大小
void cout_map(const map<int, int> &temp_map) {
    for (map<int, int>::const_iterator m = temp_map.begin(); m != temp_map.end(); ++m) {
        cout << "key:" << m->first << "value:" << m->second << endl;
    }
    cout << endl;
}

void test_01() {
    map<int, int> map_01;
    map_01.insert(make_pair(1, 10));
    map_01.insert(make_pair(2, 20));
    map_01.insert(make_pair(3, 30));
    if (map_01.empty()) {
        cout << "map_01為空" << endl;
    } else {
        cout << "map_01大小為" << map_01.size() << endl;
    }
}

void test_02() {
    map<int, int> map_02;
    map_02.insert(make_pair(1, 10));
    map_02.insert(make_pair(2, 20));
    map_02.insert(make_pair(3, 30));
    map<int, int> map_03;
    map_03.insert(make_pair(4, 40));
    map_03.insert(make_pair(5, 50));
    map_03.insert(make_pair(6, 60));
    cout << "交換前: " << endl;
    cout_map(map_02);
    cout_map(map_03);

    cout << "交換後: " << endl;
    map_02.swap(map_03);
    cout_map(map_02);
    cout_map(map_03);

}

int main() {
//    test_01();
    test_02();
    return 0;
}