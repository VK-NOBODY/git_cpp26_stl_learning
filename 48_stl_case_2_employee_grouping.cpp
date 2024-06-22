//
// Created by VULCA on 22/6/2024.
//
#include "iostream"
#include "vector"
#include "map"

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

using namespace std;

class Worker {
public:
    string worker_name;
    int worker_salary;
};

void create_worker(vector<Worker> &workers) {
    string name_seed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++) {
        Worker worker;
        worker.worker_name = "員工";
        worker.worker_name += name_seed[i];
        worker.worker_salary = rand() % 10000 + 10000;//10000~19999
        workers.push_back(worker);
    }
}

void set_group(vector<Worker> &temp_vector, multimap<int, Worker> &temp_multimap) {
    for (vector<Worker>::iterator it = temp_vector.begin(); it != temp_vector.end(); it++) {
        //產生隨機部門編號
        int department_number = rand() % 3;
        switch (department_number) {
            case 0:
                temp_multimap.insert(pair<int, Worker>(0, *it));
                break;
            case 1:
                temp_multimap.insert(pair<int, Worker>(1, *it));
                break;
            case 2:
                temp_multimap.insert(pair<int, Worker>(2, *it));
                break;
            default:
                break;
        }
    }
}

void show_worker_by_group(multimap<int, Worker> &temp_multimap) {
    //遍歷
    cout << "策劃部門: " << endl;
    multimap<int, Worker>::iterator pos = temp_multimap.find(CEHUA);
    int count = temp_multimap.count(CEHUA);
    int index = 0;
    for (; pos != temp_multimap.end() && index < count; pos++, index++) {
        cout << "員工姓名:" << pos->second.worker_name << "\t員工薪資:" << pos->second.worker_salary << endl;
    }
    cout << endl;
    cout << "美術部門: " << endl;
    pos = temp_multimap.find(MEISHU);
    count = temp_multimap.count(MEISHU);
    index = 0;
    for (; pos != temp_multimap.end() && index < count; pos++, index++) {
        cout << "員工姓名:" << pos->second.worker_name << "\t員工薪資:" << pos->second.worker_salary << endl;
    }
    cout << endl;
    cout << "研發部門: " << endl;
    pos = temp_multimap.find(YANFA);
    count = temp_multimap.count(YANFA);
    index = 0;
    for (; pos != temp_multimap.end() && index < count; pos++, index++) {
        cout << "員工姓名:" << pos->second.worker_name << "\t員工薪資:" << pos->second.worker_salary << endl;
    }
    cout << endl;
}

void test_01() {
    srand((unsigned int) time(nullptr));
    //1.創建員工
    vector<Worker> workers;
    create_worker(workers);
//    //測試
//    for (vector<Worker>::iterator it = workers.begin(); it != workers.end(); it++) {
//        cout << "員工姓名:" << it->worker_name << "\t員工薪資:" << it->worker_salary << endl;
//    }
//    cout << endl;
    //2.員工分組
    multimap<int, Worker> multimap_01;
    set_group(workers, multimap_01);
    //輸出各個部門員工
    show_worker_by_group(multimap_01);
}

int main() {
    test_01();
    return 0;
}