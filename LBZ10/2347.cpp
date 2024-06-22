#include<iostream>

using namespace std;

void slove(){
    int n, v = 1, ans = 0;
    cin >> n;
    while(n--) ans += v, v += 2;
    cout << ans << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--) slove();
    return 0;
}