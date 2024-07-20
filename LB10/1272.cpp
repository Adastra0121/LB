#include<iostream>

using namespace std;

int main(){
    string s1,s2 = "666";
    cin >> s1;
    int p = s1.find(s2);
    if(p == -1) {
        cout << s1;
        return 0;
    }
    s1.insert(p,"codethinking");
    cout << s1;
    return 0;
}