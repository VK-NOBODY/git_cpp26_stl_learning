//
// Created by VULCA on 22/6/2024.
//
#include"iostream"
#include "map"

using namespace std;

class MyCompare {
public:
    bool operator()(const int v1, const int v2) const {
        return v1 > v2;
    }
};

void test_01() {
    map<int, int, MyCompare> map_01;
    map_01.insert(make_pair(1, 10));
    map_01.insert(make_pair(2, 20));
    map_01.insert(make_pair(3, 30));
    map_01.insert(make_pair(4, 40));
    map_01.insert(make_pair(5, 50));
    for (auto it = map_01.begin(); it != map_01.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

}

int main() {
    test_01();
    return 0;
}