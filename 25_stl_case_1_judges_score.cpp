//
// Created by VULCA on 20/6/2024.
//
#include "iostream"
#include "vector"
#include "deque"
#include "algorithm"

using namespace std;

class Person {
public:
    Person(string temp_name, int temp_score) {
        this->player_name = temp_name;
        this->player_score = temp_score;
    }

    string player_name;//姓名
    int player_score;//平均分
};

void create_person(vector<Person> &temp_vector) {
    string name_seed = "ABCDE";
    for (int i = 0; i < 5; ++i) {
        string name = "选手";
        name += name_seed[i];
        Person temp_person(name, 0);
        temp_vector.push_back(temp_person);
    }
}

void set_score(vector<Person> &temp_vector) {//設定分數
    for (vector<Person>::iterator i = temp_vector.begin(); i != temp_vector.end(); i++) {
        deque<int> temp_score;
        for (int j = 0; j < 10; j++) {
            int score = rand() % 41 + 60;
            temp_score.push_back(score);
        }
        cout << "選手: " << i->player_name << " 分數: ";
        for (deque<int>::iterator j = temp_score.begin(); j != temp_score.end(); j++) {
            cout << *j << " ";
        }
        cout << endl;
        sort(temp_score.begin(), temp_score.end());
        temp_score.pop_front();
        temp_score.pop_back();
        int sum = 0;
        for (deque<int>::iterator j = temp_score.begin(); j != temp_score.end(); j++) {
            sum += *j;
        }
        i->player_score = sum / temp_score.size();
    }
}

void bigger_to_smaller(vector<Person> &temp_vector) {
    for (vector<Person>::iterator i = temp_vector.begin(); i != temp_vector.end(); ++i) {
        for (vector<Person>::iterator j = i + 1; j != temp_vector.end(); ++j) {
            if (i->player_score < j->player_score) {
                swap(*i, *j);
            }
        }
    }
    for (vector<Person>::iterator i = temp_vector.begin(); i != temp_vector.end(); ++i) {
        cout << "選手: " << i->player_name << " 分數: " << i->player_score << endl;
    }
}

int main() {
    //1.創建5名選手
    vector<Person> players;
    create_person(players);
    //測試
    for (vector<Person>::iterator it = players.begin(); it != players.end(); it++) {
        cout << "姓名: " << it->player_name << "\t平均分: " << it->player_score << endl;
    }
    //2.給5名選手打分
    set_score(players);
    //3.將5名選手分數由大到小排序
    bigger_to_smaller(players);
    return 0;
}