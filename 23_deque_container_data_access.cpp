//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "deque"

using namespace std;

void test_01() {
    deque<int> deque_01;
    deque_01.push_back(10);
    deque_01.push_back(20);
    deque_01.push_back(30);
    deque_01.push_front(100);
    deque_01.push_front(200);
    deque_01.push_front(300);

    //通過[]方式訪問元素
    //300 200 100 10 20 30
    for (int i = 0; i < deque_01.size(); ++i) {
        cout << deque_01[i] << " ";
    }
    cout << endl;

    //通過at方式訪問元素
    //300 200 100 10 20 30
    for (int i = 0; i < deque_01.size(); ++i) {
        cout << deque_01.at(i) << " ";
    }
    cout << endl;

    cout << "第一個元素為: " << deque_01.front() << endl;
    cout << "最後一個元素為: " << deque_01.back() << endl;


}

int main() {
    test_01();
    return 0;
}