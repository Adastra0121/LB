#include<bits/stdc++.h>

using namespace std;

int tree[100010], m , n, k, x;

int main(){
    cin >> n >> m;
    while (n--) {
        cin >> x;
        if (x <= 100000) tree[x]++;
    }
    while (m--){
        cin >> k;
        cout << tree[k] << ' ';
    } 
    return 0;
}