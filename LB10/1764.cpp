// #include<iostream>

// using namespace std;

// int main(){
//     string s;
//     char ca, cb;
//     getline(cin,s);
//     cin >> ca >> cb;
//     for(int i = 0; i < s.length(); i++)
//         if(s[i] == ca) s[i] = cb;
//     cout << s;
//     return 0;
// }
#include<iostream>

using namespace std;

int main(){
    string s;
    char ca, cb;
    getline(cin,s);
    cin >> ca >> cb;
    for(auto &c : s)
        if(c == ca) c = cb;
    cout << s;
    return 0;
}