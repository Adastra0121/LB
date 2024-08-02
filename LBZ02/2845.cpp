#include<iostream>
#include<cstring>
using namespace std;
int n, m, a[110][110], b[110][110], k, c;
int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> k;
    while (k--)
    {
        cin >> c;
        switch (c)
        {
        case 0:
            int i, j, x;
            cin >> i >> j >> x;
            a[i][j] = x;
            break;
        case 1:
            int d;
            cin >> d;
            if(d == 90){
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++) b[j][n + 1 - i] = a[i][j];
                }
                swap(n, m);
            }else if(d == -90){
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++) b[m + 1 - j][i] = a[i][j];
                }
                swap(n, m);
            }else if(d == -180 || d == 180){
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++) b[n + 1 - i][m + 1 - j]  = a[i][j];
                }
            }
            memcpy(a, b, sizeof(b));
            break;
        case 2:
            int f;
            cin >> f;
            if(f == 1){
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++) b[i][m + 1 - j] = a[i][j];
                }
            }else if(f == 2){
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++) b[n + 1 - i][j] = a[i][j];
                }
            }else if(f == 3){
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++) b[j][i] = a[i][j];
                }
                swap(n, m);
            }else if(f == 4){
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= m; j++) b[m + 1 - j][n + 1 - i] = a[i][j];
                }
                swap(n, m);
            }
            memcpy(a, b, sizeof(b));
            break;
        default:
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}