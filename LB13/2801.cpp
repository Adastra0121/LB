#include<iostream>
#include<algorithm>
using namespace std;
struct Node
{
    int id, data, ans;
}a[10010];
int n;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].data, a[i].id = i;
    sort(a + 1, a + n + 1, [](Node &x, Node &y){
        return x.data < y.data;
    });
    for (int i = 1; i <= n; i++) a[i].ans = i;
    sort(a + 1,a + 1 + n, [](Node &x, Node &y){
        return x.id < y.id;
    });
    for(int i = 1; i <= n; i++) cout << a[i].ans << ' ';
    return 0;
}