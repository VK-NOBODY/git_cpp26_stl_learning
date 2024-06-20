//
// Created by VULCA on 20/6/2024.
//
#include "deque"
#include "iostream"

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
    //operator=賦值
    deque<int> deque_02;
    deque_02 = deque_01;
    cout_vector(deque_02);

    //assign 賦值
    deque<int> deque_03;
    deque_03.assign(deque_01.begin(), deque_01.end());
    cout_vector(deque_03);

    deque<int> deque_04;
    deque_04.assign(10, 100);
    cout_vector(deque_04);
}

int main() {
    test_01();
    return 0;
}