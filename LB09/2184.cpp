#include<bits/stdc++.h>

using namespace std;

int n, m, restaurant[110], a, temp, ans;

int main(){
    cin >> n >> m;
    while(m--) cin >> a, restaurant[a]++;
    for(int i = 1;i <= n; i++) 
        if(temp < restaurant[i]) temp = restaurant[i], ans = i;
    cout << temp << endl;
}