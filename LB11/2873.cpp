#include<iostream>
#include<cmath>
using namespace std;
string s, t;
int p,lp;

bool check(string s){
    if(s.size() < 6 || s.size() > 12) return false;
    bool lower = false, upper = false, digit = false, other = false;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])) lower = true;
        else if(isupper(s[i])) upper = true;
        else if(isdigit(s[i])) digit = true;
        else if(s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$') other = true;
        else return false;
    }
    if(lower + upper + digit >= 2 && other) return true;
    else return false;
}

int main(){
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==','){
            t = s.substr(p,i-p);
            p = i+1;
            if(check(t)) cout << t << endl;
        }
    }
    lp = s.rfind(',');
    t = s.substr(lp+1,s.length()-lp);
    if(check(t)) cout << t << endl;
    return 0;
}

