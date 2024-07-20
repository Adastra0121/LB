#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        int p = s.find("Ban_smoking");
        while(p!=-1){
            s.replace(p,11,"No_smoking");
            p = s.find("Ban_smoking");
        } 
        cout << s << endl;
    }
    return 0;
}