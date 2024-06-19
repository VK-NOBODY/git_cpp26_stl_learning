//
// Created by VULCA on 19/6/2024.
//
#include "iostream"
#include "vector"

using namespace std;

void cout_vector(vector<int> &temp_vector) {//輸出vector
    for (int i = 0; i < temp_vector.size(); i++) {
        cout << temp_vector[i] << " ";
    }
    cout << endl;
}

void test_01() {
    vector<int> vector_01;
    for (int i = 0; i < 10; i++) {
        vector_01.push_back(i);
    }
    cout_vector(vector_01);

    //賦值 operator=
    vector<int> vector_02;
    vector_02 = vector_01;
    cout_vector(vector_02);

    //assign
    vector<int> vector_03;
    vector_03.assign(vector_01.begin(), vector_01.end());
    cout_vector(vector_03);

    //n個elements方式賦值
    vector<int> vector_04;
    vector_04.assign(10, 100);
    cout_vector(vector_04);
}

int main() {
    test_01();
    return 0;
}