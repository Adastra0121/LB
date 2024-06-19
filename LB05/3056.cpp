#include<iostream>

using namespace std;

char s[10];

int main(){
    int n, _2 , _8 , _10 , _16 ;
    cin >> n;
    while (n--)
    {
        cin >> s;
        _2 = 1, _8 = 1, _10 = 1, _16 = 1;
        for (int i = 0; s[i]; i++)
        {
            if(s[i]>='2') _2 = 0;
            if(s[i]>='8')  _8 = 0;
            if(s[i]>='A') _10 = 0;
            if(s[i]>'F')  _16 = 0;
        }
        cout << _2 << ' ' << _8 << ' ' << _10 << ' ' << _16 << endl;
    }
    return 0;
}