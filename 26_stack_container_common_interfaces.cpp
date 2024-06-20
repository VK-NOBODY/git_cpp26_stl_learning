//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "stack"

using namespace std;

void test_01() {
    stack<int> stack_01;
    //入棧
    stack_01.push(10);
    stack_01.push(20);
    stack_01.push(30);
    stack_01.push(40);
    cout << "stack_01.size() = " << stack_01.size() << endl;
    //只要棧不為空 查看棧頂 並且執行出棧操作
    while (!stack_01.empty()) {
        cout << stack_01.top() << endl;
        stack_01.pop();
    }
    cout << "stack_01.size() = " << stack_01.size() << endl;
}

int main() {
    test_01();
    return 0;
}