#include<iostream>
using namespace std;
int main(){
    string s, t;
    long long x = 0;
    while (cin >> t)
    {
        s += t;
        if(s.size()>6) x += stoll(s), s="";
    }
    if(s.size()) x += stoll(s);
    cout << x ;
    return 0;
}