//
// Created by VULCA on 21/6/2024.
//
#include "iostream"
#include "list"

using namespace std;

void cout_list(const list<int> &temp_list) {
    for (list<int>::const_iterator it = temp_list.begin(); it != temp_list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//list容器插入和删除
void test_01() {
    list<int> list_01;
    //尾插
    list_01.push_back(10);
    list_01.push_back(20);
    list_01.push_back(30);

    //頭插
    list_01.push_front(100);
    list_01.push_front(200);
    list_01.push_front(300);
    //300 200 100 10 20 30
    cout_list(list_01);

    //尾刪
    list_01.pop_back();
    //300 200 100 10 20
    cout_list(list_01);

    //頭刪
    list_01.pop_front();
    //200 100 10 20
    cout_list(list_01);

    //insert插入
    list<int>::const_iterator it = list_01.begin();
    list_01.insert(++it, 1000);
    //1000 200 100 10 20
    cout_list(list_01);

    //erase刪除
    list_01.erase(++it);
    //1000 200 100 20
    cout_list(list_01);

    //移除
    list_01.push_back(10000);
    list_01.push_back(10000);
    list_01.push_back(10000);
    list_01.push_back(10000);
    list_01.remove(10000);
    //200 1000 100 20
    cout_list(list_01);
}

int main() {
    test_01();
    return 0;
}