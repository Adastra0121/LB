#include<iostream>
using namespace std;
int n, temp, k;
struct S{
    string name;
    int height;
    int id;
}s[105];
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i].name >> s[i].height >> s[i].id;
        if (temp < s[i].height) temp = s[i].height,k = i;
        else if (temp == s[i].height && s[k].id > s[i].id) k = i;
    }
    cout << s[k].name << ' ' << s[k].height << ' ' << s[k].id;
    return 0;
}