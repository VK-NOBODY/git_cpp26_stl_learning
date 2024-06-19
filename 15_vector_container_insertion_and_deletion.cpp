//
// Created by VULCA on 19/6/2024.
//
#include "iostream"
#include "vector"

using namespace std;

void cout_vector(vector<int> &vector_01) {
    for (vector<int>::iterator v = vector_01.begin(); v != vector_01.end(); v++) {
        cout << *v << " ";
    }
    cout << endl;
}

void test_01() {
    vector<int> vector_01;
    vector_01.push_back(10);
    vector_01.push_back(20);
    vector_01.push_back(30);
    vector_01.push_back(40);
    vector_01.push_back(50);
    //遍歷
    cout_vector(vector_01);

    //尾刪
    vector_01.pop_back();
    cout_vector(vector_01);

    //插入 第一個參數是迭代器
    vector_01.insert(vector_01.begin(), 100);
    cout_vector(vector_01);
    vector_01.insert(vector_01.begin(), 2, 1000);
    cout_vector(vector_01);

    //刪除
    vector_01.erase(vector_01.begin());
    cout_vector(vector_01);

//    vector_01.erase(vector_01.begin(), vector_01.end());
    vector_01.clear();
    cout_vector(vector_01);


}

int main() {
    test_01();
    return 0;
}