//
// Created by VULCA on 18/6/2024.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

//容器嵌套容器
void test_01() {
    vector<vector<int>> v;
    //創建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    //向小容器中添加元素
    for (int i = 0; i < 4; i++) {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
    }
    //將小容器添加到大容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    //遍歷大容器
    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
        //遍歷小容器
        for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
            cout << *vit << " ";
        }
        cout << endl;
    }
}

int main() {
    test_01();
    return 0;
}