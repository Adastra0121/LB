#include<iostream>
#include<algorithm>
using namespace std;
pair<double, int> a[110];
int n, k;
int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i].second >> a[i].first;
    sort(a + 1,a + n + 1,greater<pair<double,int>>());
    cout << a[k].second << ' ' << a[k].first;
    return 0;
}