#include<iostream>

using namespace std;

char a[150], x;

int main(){
    a['1'] = 'A', a['3'] = 'B', a['7'] = 'C', a['6'] = 'D', a['2'] = 'E';
    while (cin >> x)
    {
        cout << a[x];
    }
    return 0;
}