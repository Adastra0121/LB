#include<iostream>
#include<iomanip>
using namespace std;
struct Stu
{
    string name;
    char gender;
    int age;
    double weight;
}stu;

int main(){
    cin >> stu.name >> stu.gender >> stu.age >> stu.weight;
    cout << stu.name << ' ';
    cout << stu.gender << ' ';
    cout << stu.age << ' ';
    cout << fixed << setprecision(1) << stu.weight;
    return 0;
}