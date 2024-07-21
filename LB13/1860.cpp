#include<iostream>
using namespace std;
struct Stu{ 
    string name; 
    char gender; 
    int num; 
    double score; 
}stu[110]; 
int n, a, b;
int main(){ 
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> stu[i].name >> stu[i].gender >> stu[i].num >> stu[i].score;
    cin >> a >> b;
    for (int i = a; i <= b; i++) 
        cout << stu[i].name << ' ' << stu[i].gender << ' '
        << stu[i].num << ' ' << stu[i].score << "\n";
    return 0; 
}