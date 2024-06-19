#include<iostream>

using namespace std;

char s[260];
int cnt;

int main(){
    fgets(s,sizeof(s),stdin);
    for (int i = 0; s[i]; i++)
    {
        if(s[i] >= '0'&& s[i] <= '9') cnt++;
    }
    cout << cnt;
    return 0;
}