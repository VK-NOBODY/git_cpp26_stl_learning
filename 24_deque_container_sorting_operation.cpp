//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "deque"
#include "algorithm"//標準算法頭文件

using namespace std;

void cout_deque(const deque<int> &temp_deque) {
    for (deque<int>::const_iterator it = temp_deque.begin(); it != temp_deque.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test_01() {
    deque<int> deque_01;
    deque_01.push_back(10);
    deque_01.push_back(20);
    deque_01.push_back(30);
    deque_01.push_front(100);
    deque_01.push_front(200);
    deque_01.push_front(300);
    //排序前
    cout_deque(deque_01);

    //排序 默認排序規則 從小到大 升序
    //對於支持隨機訪問的迭代器的容器，sort函數都可以進行排序操作。
    //排序後
    sort(deque_01.begin(), deque_01.end());
    cout << "排序後：";
    cout_deque(deque_01);
    cout << endl;
}

int main() {
    test_01();
    return 0;
}