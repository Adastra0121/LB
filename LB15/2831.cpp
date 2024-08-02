#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;
int main(){
    string s;
    stringstream ss;
    while (cin >> s) ss << s;
    long long ans;
    ss >> ans;
    cout << ans * ans << ' ' << int(sqrt(ans));
    return 0;
}