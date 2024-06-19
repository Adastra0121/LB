#include<iostream>

using namespace std;

char s[110];

int main(){
    cin >> s;
    for (int i = 0; s[i]; i++)
    {
        s[i] += 3;
    }
    puts(s);
    return 0;
}