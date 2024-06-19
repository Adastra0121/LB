#include<iostream>

using namespace std;

char s[210];

int main(){
    cin >> s;
    for (int i = 0; s[i]; i++)
    {
        if(s[i]<='Z') s[i] += 'a' - 'A';
        else if(s[i] <= 'z') s[i] -= 'a' - 'A';
    }
    puts(s);
    return 0;
}