#include<iostream>

using namespace std;

int a[150], x, n, ans;
char c;
int main(){
    cin >> n;
    while(n--){
        cin >> c >> x, a[c] = x;
    }
    while(cin >> c) ans += a[c];
    cout << ans;
    return 0;
}