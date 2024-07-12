#include<bits/stdc++.h>

using namespace std;

int lottery[35], n, m, x, cnt, prize[10];

int main(){
    cin >> n;
    for (int i = 1; i <= 7; i++) cin >> x, lottery[x] = 1;
    while (n--)
    {
        m = 7,cnt = 0;
        while (m--){
            cin >> x;
            if (lottery[x]==1) cnt++;
        }
        prize[cnt]++;
    }
    for (int i = 7; i >= 1; i--)
    {
        cout << prize[i] << ' ';
    }
    
}