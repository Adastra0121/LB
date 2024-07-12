#include<bits/stdc++.h>

using namespace std;

int pen[20];
char x;

int main(){
    for (int i = 1; i <= 16; i++)
    {
        cin >> x;
        if(pen[x]){
            cout << pen[x] << ' ' << i;
            return 0;
        }
        pen[x] = i;
    }
    cout << "different" ;
    return 0;
}