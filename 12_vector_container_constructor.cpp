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

//vector容器構造
void test_01() {
    vector<int> vector_01;//默認構造 無參構造
    for (int i = 0; i < 10; ++i) {
        vector_01.push_back(i);
    }
    cout_vector(vector_01);

    //通過區間方式進行構造
    vector<int> vector_02(vector_01.begin(), vector_01.end());
    cout_vector(vector_02);

    //n個elements構造
    vector<int> vector_03(10, 100);
    cout_vector(vector_03);

    //拷貝構造
    vector<int> vector_04(vector_03);
    cout_vector(vector_04);
}

int main() {
    test_01();
    return 0;
}