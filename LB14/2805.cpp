#include<bits/stdc++.h>
using namespace std;
int n, w, p, a[110], b[110], c[110], wa, wb, wc;
double d[110], e[110], f[110];
int main(){
    cin >> n >> w >> p;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i] >> f[i];
        wa = max(wa, int(log10(a[i]) + 1));
        wb = max(wb, int(log10(b[i]) + 1));
        wc = max(wc, int(log10(c[i]) + 1));
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%*d %-*d %0*d %*.*f %-*.*f %.*f\n",
            wa, a[i],
            wb, b[i],
            wc, c[i],
            w, p, d[i],
            w, p, e[i],
            p, f[i]
        );
    }
    return 0;
}