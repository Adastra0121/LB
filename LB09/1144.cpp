#include<bits/stdc++.h>

using namespace std;

int n, m, a[100010], b[110], x, ans;

int main(){
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        a[i] = 1;
        for (int j = 1; j <= m; j++)
        {
            if (i % b[j] == 0) a[i] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(a[i]) ans++;
    }
    cout << ans ;
    return 0;
}