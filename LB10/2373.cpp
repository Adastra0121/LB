#include<bits/stdc++.h>

using namespace std;

string s, s1, s2;

int main(){
    cin >> s, s1 = s2 = s;
    while(cin >> s){
        if(s.length() > s1.length()) s1 = s;
        if(s.length() < s2.length()) s2 = s;
    }
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}