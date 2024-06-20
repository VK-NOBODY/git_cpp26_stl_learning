//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "vector"

using namespace std;

void test_01() {
    vector<int> vector_01;

    //利用reserve方法预先分配空间
    vector_01.reserve(100000);
    int number = 0;
    int *p = nullptr;
    for (int i = 0; i < 100000; ++i) {
        vector_01.push_back(i);
        if (p != &vector_01[0]) {
            p = &vector_01[0];
            ++number;
            cout << "vector_01 capacity= " << vector_01.capacity() << endl;
        }
    }
    cout << "number= " << number << endl;
}

int main() {
    test_01();
    return 0;
}