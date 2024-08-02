#include<bits/stdc++.h>
using namespace std;
int n, cnt = 1;
int main(){
    cin >> n;
    int i;
    for (i = 1; cnt <= n; i++)
    {
        int num[10] ={0},t = 0;
        for (int j = i; j > 0; j /= 10)
        {
            num[j%10]++;
        }
        for (int j = 0; j <= 9; j++)
        {
            if(num[j]>=2) {
                t = 1;
                break;
            }
        }
        if(!t) cnt++;
    }
    cout << i-1;
    return 0;
}