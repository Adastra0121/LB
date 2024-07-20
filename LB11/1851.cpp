#include<iostream>
using namespace std;
long long add(int n){
    long long ans = 1;
    for(int i = 1;i<=n;i++) ans *= i;
    return ans;
}
int main(){
    int m, n;
    cin >> m >> n;
    cout << add(m)/add(m-n) << endl;
    cout << add(m)/add(n)/add(m-n) << endl;
    return 0;
}