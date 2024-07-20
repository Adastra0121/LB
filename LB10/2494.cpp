#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    string s,s2;
    cin >> n;
    cin >> s;
    n--;
    while (n--)
    {
        cin >> s2;
        s = s2 < s ? s2 : s;
    }
    cout << s;
    return 0;
}