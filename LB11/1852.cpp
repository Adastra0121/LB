#include<iostream>
using namespace std;
long long add(int n){
    if(n==1) return n;
    else return n+add(--n);
}
int main(){
    int n, m ,k;
    cin >> n >> m >> k;
    cout << add(n)+add(m)+add(k);
    return 0;
}