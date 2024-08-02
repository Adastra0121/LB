#include<iostream>
using namespace std;
int a[110][110], n;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<< a[j][i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}