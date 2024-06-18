#include<iostream>

using namespace std;

char s[210],ca,cb;

int main(){
    fgets(s,sizeof(s),stdin);
    cin >> ca >> cb;
    for (int i = 0; s[i]; i++)
    {
        if(s[i] == ca) s[i] = cb;
    }
    cout << s;
    return 0;
}