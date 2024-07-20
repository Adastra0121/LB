#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    if (s.size() > 2 && (s.substr(s.size()-2,2) == "er" || s.substr(s.size()-2,2) == "ly") ) s.erase(s.size()-2,2);
    else if (s.size() > 3 && s.substr(s.size()-3,3) == "ing") s.erase(s.size()-3,3);
    cout << s;
    return 0;
}