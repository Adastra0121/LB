#include<iostream>

using namespace std;

char s[110];

int main(){
    int n;
    cin >> n,fgets(s,sizeof(s),stdin);
    while (n--)
    {
        fgets(s,sizeof(s),stdin);
        if(s[0]>='a'&&s[0]<='z') s[0] -= 'a' - 'A';
        for (int i = 1; s[i]; i++)
        {
            if(s[i]>='A'&&s[i]<='Z') s[i] += 'a' - 'A';
        }
        cout << s;
    }
    return 0;
}