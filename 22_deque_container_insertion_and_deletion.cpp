//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "deque"

using namespace std;

void cout_deque(const deque<int> &temp_deque) {
    for (deque<int>::const_iterator d = temp_deque.begin(); d < temp_deque.end(); d++) {
        cout << *d << " ";
    }
    cout << endl;
}

void test_01() {
    deque<int> deque_01;

    //尾插
    deque_01.push_back(10);
    deque_01.push_back(20);

    //头插
    deque_01.push_front(100);
    deque_01.push_front(200);

    //200 100 10 20
    cout_deque(deque_01);

    //尾刪
    deque_01.pop_back();

    //頭刪
    deque_01.pop_front();

    //100 10
    cout_deque(deque_01);
}

void test_02() {
    deque<int> deque_02;
    deque_02.push_back(10);
    deque_02.push_back(20);
    deque_02.push_front(100);
    deque_02.push_front(200);
    //200 100 10 20
    cout_deque(deque_02);

    //insert
    deque_02.insert(deque_02.begin(), 1000);
    //1000 200 100 10 20
    cout_deque(deque_02);


    deque_02.insert(deque_02.begin(), 2, 10000);
    //10000 10000 1000 200 100 10 20
    cout_deque(deque_02);

    //按照區間進行插入
    deque<int> deque_03;
    deque_03.push_back(1);
    deque_03.push_back(2);
    deque_03.push_back(3);

    deque_02.insert(deque_02.begin(), deque_03.begin(), deque_03.end());
    //1 2 3 10000 10000 1000 200 100 10 20
    cout_deque(deque_02);
}

void test_03() {
    deque<int> deque_04;
    deque_04.push_back(10);
    deque_04.push_back(20);
    deque_04.push_front(100);
    deque_04.push_front(200);

    //刪除
    deque<int>::iterator it = deque_04.begin();
    ++it;
    deque_04.erase(it);
    //200 10 20
    cout_deque(deque_04);

    //按區間進行刪除
//    deque_04.erase(deque_04.begin(), deque_04.end());
    deque_04.clear();
    cout_deque(deque_04);

}

int main() {
//    test_01();
//    test_02();
    test_03();
    return 0;
}
