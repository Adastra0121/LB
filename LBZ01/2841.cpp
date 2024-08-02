#include<iostream>
using namespace std;
int main(){
    int a1, a2, a3, n, ans = 0;
    cin >> a1 >> a2 >> a3 >> n;
    if(a2 - a1 >= a3 - a2){
        ans = a1 * n + (n - 1) * (a2 - a1) * n / 2;
    }else{
        ans = n * a2 + n * (n - 1) * (a3 - a2) / 2;
    }
    cout << ans;
    return 0;
}