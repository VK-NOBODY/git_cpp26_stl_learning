//
// Created by VULCA on 18/6/2024.
//
#include "vector"
#include "iostream"
#include "algorithm" //標準算法頭文件

using namespace std;

void my_cout(int temp_var) {
    cout << temp_var << " ";
}

//vector容器存放內置類型數據
void test_01() {
    //創建了一個vector容器,數組
    vector<int> v;
    //向容器中插入數據
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //通過迭代器訪問容器中的數據
    vector<int>::iterator it_begin = v.begin();//起始迭代器 指向容器中第一個元素
    vector<int>::iterator it_end = v.end();//結束迭代器 指向容器中最後一個元素的下一個位置

    //第一種遍歷方式
    while (it_begin != it_end) {
        cout << *it_begin << " ";
        it_begin++;
    }
    cout << endl;
    //第二種遍歷方式
    it_begin = v.begin();
    for (; it_begin != it_end; it_begin++) {
        cout << *it_begin << " ";
    }
    cout << endl;
    //第三種遍歷方式 利用STL提供算法
    for_each(v.begin(), v.end(), [](int a) {
        cout << a << " ";
    });
    cout << endl;
    for_each(v.begin(), v.end(), my_cout);
}

int main() {
    test_01();
    return 0;
}