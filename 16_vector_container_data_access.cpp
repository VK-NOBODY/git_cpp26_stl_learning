//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "vector"

using namespace std;

void test_01() {
    vector<int> vector_01;
    for (int i = 0; i < 10; i++) {
        vector_01.push_back(i);
    }

    //利用[]方式訪問數組中的元素
    for (int i = 0; i < vector_01.size(); i++) {
        cout << vector_01[i] << " ";
    }
    cout << endl;
    //利用at()方式訪問數組中的元素
    for (int i = 0; i < vector_01.size(); i++) {
        cout << vector_01.at(i) << " ";
    }
    cout << endl;
    //獲取第一個元素
    cout << vector_01.front() << endl;
    //獲取最後一個元素
    cout << vector_01.back() << endl;
}

int main() {
    test_01();
    return 0;
}
