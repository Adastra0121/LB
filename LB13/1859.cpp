#include<iostream>
using namespace std;
struct Stu{
    string name;
    char gender;
    int num;
    double score;
}stu;
int main(){
    cin >> stu.name >> stu.gender >> stu.num >> stu.score;
    char c;
    cin >> c;
    switch (c){
        case 'm':
            cout << stu.name;
            break;
        case 's':
            cout << stu.gender;
            break;
        case 'n':
            cout << stu.num;
            break;
        case 'c':
            cout << stu.score;
            break;
    }
    return 0;
}