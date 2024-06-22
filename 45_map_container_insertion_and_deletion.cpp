//
// Created by VULCA on 22/6/2024.
//
#include "iostream"
#include "map"

using namespace std;

void cout_map(const map<int, int> &temp_map) {
    for (map<int, int>::const_iterator m = temp_map.begin(); m != temp_map.end(); ++m) {
        cout << "key: " << m->first << " value: " << m->second << endl;
    }
    cout << endl;
}

//map容器 插入和刪除
void test_01() {
    map<int, int> map_01;
    //插入
    //第一種
    map_01.insert(make_pair(1, 10));
    //第二種
    map_01.insert(pair<int, int>(2, 20));
    //第三種
    map_01.insert(map<int, int>::value_type(3, 30));
    //第四種
    map_01[4] = 40;
    cout_map(map_01);
    //[]不建議插入,用途,可以利用key訪問value
//    cout << map_01[5] << endl;
//    cout_map(map_01);

    //刪除
    map_01.erase(map_01.begin());
    cout_map(map_01);

    map_01.erase(3);//按照key值刪除
    cout_map(map_01);

    //清空
//    map_01.erase(map_01.begin(), map_01.end());//按照區間刪除
    map_01.clear();
    cout_map(map_01);


}

int main() {
    test_01();
    return 0;
}