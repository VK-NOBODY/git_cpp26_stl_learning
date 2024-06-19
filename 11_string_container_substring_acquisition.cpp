//
// Created by VULCA on 19/6/2024.
//
#include "iostream"

using namespace std;

void test_01() {
    string string_01 = "abcdef";
    string sub_string_01 = string_01.substr(1, 3);
    cout << "sub_string_01= " << sub_string_01 << endl;
}

//實用操作
void test_02() {
    string email = "nobody@outlook.com";

    //從郵件地址中 獲取 用戶名信息
    int pos = email.find("@");
    if (pos != -1) {
        string user_name = email.substr(0, pos);
        cout << "user_name= " << user_name << endl;
    }
}

int main() {
//    test_01();
    test_02();
    return 0;
}