#include<bits/stdc++.h>
using namespace std;
int m, n;
double a[110][110];
int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            a[i][m + 1] += a[i][j];
            a[n + 1][j] += a[i][j];
            a[n + 1][m + 1] += a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) a[i][m + 1] /= m;
    for (int i = 1; i <= m; i++) a[n + 1][i] /= n;
    a[n + 1][m + 1] /= n * m;
    stringstream ss;
    ss << fixed << setprecision(2);
    for (int i = 1; i <= n+1; i++)
    {
        for (int j = 1; j <= m+1; j++)
        {
            ss << a[i][j] ;
            if(j <= m) ss << ' ';
        }
        ss << endl;
    }
    cout << ss.str() << ss.str().size();
    return 0;
}