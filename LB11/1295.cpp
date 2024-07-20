#include<iostream>
using namespace std;
unsigned long long Pow(int n){
    unsigned long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= 2;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << Pow(n);
    return 0;
}