#include<iostream>

using namespace std;

char s[10010];
int A,E,I,O,U;

int main(){
    while (fgets(s,sizeof(s),stdin))
    {
        for (int i = 0; s[i]; i++)
        {
            if(s[i] == 'A') A++;
            else if(s[i] == 'E') E++;
            else if(s[i] == 'I') I++;
            else if(s[i] == 'O') O++;
            else if(s[i] == 'U') U++;
        }        
    }
    cout << A << ' ' << E << ' '  << I << ' ' << O << ' ' << U;
    return 0;
}