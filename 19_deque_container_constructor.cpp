//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "deque"

using namespace std;

void cout_deque(const deque<int> &temp_deque) {
    for (deque<int>::const_iterator d = temp_deque.begin(); d != temp_deque.end(); ++d) {
//        *d=100;
        cout << *d << " ";
    }
    cout << endl;
}

//deque構造函數
void test_01() {
    deque<int> deque_01;
    for (int i = 0; i < 10; ++i) {
        deque_01.push_back(i);
    }
    cout_deque(deque_01);

    deque<int> deque_02(deque_01.begin(), deque_01.end());
    cout_deque(deque_02);

    deque<int> deque_03(10, 100);
    cout_deque(deque_03);

    deque<int> deque_04(deque_03);
    cout_deque(deque_04);
}

int main() {
    test_01();
    return 0;
}