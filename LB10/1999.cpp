#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, p,str = "No";
    cin >> s >> p;
    if(s.size()%p.size() == 0){
        str = "Yes";
        for (int i = 0; i < s.size()/p.size(); i++)
        {
            if(s.substr(p.size()*i,p.size())!=p) str = "No";
        }
    } 
    cout << str;
    return 0;
}