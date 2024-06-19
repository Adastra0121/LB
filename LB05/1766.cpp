#include<iostream>

using namespace std;

char s[210];

int main(){
    fgets(s,sizeof(s),stdin);
    for (int i = 0; s[i]; i++)
    {
        if(s[i]>='F' && s[i] <= 'Z') s[i] = (s[i] - 5) % 'A' + 'A' ;
        else if(s[i] >= 'A' && s[i] <= 'E') s[i] = (s[i] + 21) % 'A' + 'A' ;
    }
    puts(s);
    return 0;
}
