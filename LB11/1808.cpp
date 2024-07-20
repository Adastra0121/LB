#include<iostream>
using namespace std;
void f(){
    cout << "+++++++++++++++++++++++++" << endl;
}
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    f();
    cout << s1 << endl;
    f();
    cout << s2 << endl;
    f();
    return 0;
}