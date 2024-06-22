#include<iostream>

using namespace std;

char s[1010];

bool check(string s){
    for (int i = 0, j = s.size() - 1; i < j; j--,i++)
    {
        if(s[i] != s[j]) return false;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    for (int i = s.size(); i >= 1; i--)
    {
        for (int j = 0; j + i <= s.size(); j++)
        {
            if(check(s.substr(j,i))){
                cout << i;
                return 0;
            }
        }
    }
    return 0;    
}