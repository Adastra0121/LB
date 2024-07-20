#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
    string s,v = "Valid";
    cin >> s;
    if(s[0]!='+'&&s[0]!='-'&&isdigit(s[0])==0&&s[0]!='.') v ="Invalid";
    for (int i = 1; i < s.size(); i++)
    {
        if (isdigit(s[i])==0&&s[i]!='.') v="Invalid";
    }
    int p1 = s.find('.'),p2=s.rfind('.');
    if(p1!=p2) v = "Invalid";
    if(s==".") v = "Invalid";
    cout << v;
}