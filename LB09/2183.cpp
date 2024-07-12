#include<bits/stdc++.h>

using namespace std;

int n, m, restaurant[110], a, ans;

int main(){
    cin >> n >> m;
    while(m--) cin >> a, restaurant[a]++;
    for(int i = 1;i <= n; i++) 
        if(restaurant[i]==0) ans++;
    cout << ans << endl;
}