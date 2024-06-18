#include<iostream>

using namespace std;

char s[110];

int main(){
    int n;
    cin >> n,fgets(s,sizeof(s),stdin);
    while (n--)
    {
        fgets(s,sizeof(s),stdin);
        cout << s;
    }
    return 0;
}