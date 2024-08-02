#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d, e, f;
    char sa[50], sb[50];
    long long A, B;
    while (cin >> a >> b >> c >> d >> e >> f)
    {
        sprintf(sa, "%d%d%d", a, b, c);
        sprintf(sb, "%d%d%d", d, e, f);
        sscanf(sa, "%lld", &A);
        sscanf(sb, "%lld", &B);
        cout << A + B << endl;
    }
    return 0;
}