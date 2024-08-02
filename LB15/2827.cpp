#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s;
    while (getline(cin,s))
    {
        stringstream ss(s);
        int ans = 0, x;
        while (ss >> x) ans += x;
        cout << ans << endl;
    }
    return  0;
}