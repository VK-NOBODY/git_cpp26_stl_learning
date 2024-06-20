//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "deque"

using namespace std;

void cout_vector(const deque<int> &temp_deque) {
    for (deque<int>::const_iterator d = temp_deque.begin(); d != temp_deque.end(); ++d) {
        cout << *d << " ";
    }
    cout << endl;
}

void test_01() {
    deque<int> deque_01;
    for (int i = 0; i < 10; ++i) {
        deque_01.push_back(i);
    }
    cout_vector(deque_01);
    if (deque_01.empty()) {
        cout << "deque_01 is empty" << endl;
    } else {
        cout << "deque_01 is not empty" << endl;
        cout << "deque_01的大小為: " << deque_01.size() << endl;//返回元素個數
//        cout<<"deque_01的容量為: "<<deque_01.capacity()<<endl;  //deque沒有容量的概念
    }

    //重新指定大小
    deque_01.resize(15);
    cout_vector(deque_01);
    deque_01.resize(20, 2);
    cout_vector(deque_01);
    deque_01.resize(5);
    cout_vector(deque_01);
}

int main() {
    test_01();
    return 0;
}