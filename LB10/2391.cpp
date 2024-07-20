#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    for (auto c :s) 
        if(isalpha(c) || c == ' ') cout << c;
    return 0;
}