#include<iostream>
using namespace std;
struct NOIP{
    string name;
    int s[4], sum;
}a[110];
int n;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].name;
        for (int j = 0; j < 4; j++){
            cin >> a[i].s[j];
            a[i].sum += a[i].s[j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].name << ' ' << a[i].sum << endl;
    }
    return 0;
}