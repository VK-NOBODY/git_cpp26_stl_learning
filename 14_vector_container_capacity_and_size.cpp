//
// Created by VULCA on 19/6/2024.
//
#include "iostream"
#include "vector"

using namespace std;

void cout_vector(vector<int> &temp_vector) {
    for (int i = 0; i < temp_vector.size(); ++i) {
        cout << temp_vector[i] << " ";
    }
    cout << endl;
}

void test_01() {
    vector<int> vector_01;
    for (int i = 0; i < 10; ++i) {
        vector_01.push_back(i);
    }
    cout_vector(vector_01);
    if (vector_01.empty()) {//判断vector是否为空
        cout << "vector_01 is empty" << endl;
    } else {
        cout << "vector_01 is not empty" << endl;
        cout << "vector_01 size is " << vector_01.size() << endl;
        cout << "vector_01 capacity is " << vector_01.capacity() << endl;
    }
    //重新指定大小
    vector_01.resize(15, 2);//利用重載版本,可以指定默認填充值,默認為0
    cout_vector(vector_01);//如果重新指定的size比原來大，则vector_01会自动添加0

    vector_01.resize(5);
    cout_vector(vector_01);//如果重新指定的size比原來小，则vector_01會自動刪除末尾的元素
}

int main() {
    test_01();
    return 0;
}