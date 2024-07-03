#include<iostream>

using namespace std;

bool a[10010];

int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 2; i <= k; i++)
        for (int j = i; j <= n; j += i) a[j]= !a[j];
    for (int i = 1; i < n + 1; i++)
        if(!a[i]) cout << i << ' ';
    return 0;    
}