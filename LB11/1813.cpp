#include<iostream>
using namespace std;
char digit(string n,int k){
    if (k<=n.length()) return n[n.length()-k];
    else return '0';
}
int main(){
    string n;
    int k;
    cin >> n >> k;
    cout << digit(n, k);
    return 0;
}