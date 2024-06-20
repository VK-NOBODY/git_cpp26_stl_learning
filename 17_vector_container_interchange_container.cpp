//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "vector"

using namespace std;

void cout_vector(vector<int> &temp_vector) {
    for (vector<int>::iterator v = temp_vector.begin(); v != temp_vector.end(); ++v) {
        cout << *v << " ";
    }
}

void test_01() {
    //交換前
    vector<int> vector_01;
    for (int i = 0; i < 10; ++i) {
        vector_01.push_back(i);
    }
    cout << "vector_01= ";
    cout_vector(vector_01);
    cout << endl;
    vector<int> vector_02;
    for (int i = 10; i > 0; --i) {
        vector_02.push_back(i);
    }
    cout << "vector_02= ";
    cout_vector(vector_02);
    cout << endl;

    //交換後
    vector_01.swap(vector_02);
    cout << "vector_01= ";
    cout_vector(vector_01);
    cout << endl;
    cout << "vector_02= ";
    cout_vector(vector_02);
    cout << endl;
}

//實際應用
//巧用swap可以收縮內存空間
void test_02() {
    vector<int> vector_03;
    for (int i = 0; i < 100000; ++i) {
        vector_03.push_back(i);
    }

    cout << "vector_03 capacity =" << vector_03.capacity() << endl;
    cout << "vector_03 size = " << vector_03.size() << endl;

    vector_03.resize(3);//重新指定大小
    cout << "vector_03 capacity =" << vector_03.capacity() << endl;
    cout << "vector_03 size = " << vector_03.size() << endl;

    //收縮內存
    vector<int>(vector_03).swap(vector_03);//匿名對象
    cout << "vector_03 capacity =" << vector_03.capacity() << endl;
    cout << "vector_03 size = " << vector_03.size() << endl;
}

int main() {
//    test_01();
    test_02();
    return 0;
}