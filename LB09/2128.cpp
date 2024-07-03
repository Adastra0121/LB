#include<iostream>

using namespace std;

int a[]={1,0,0,0,1,0,1,0,2,1}, ans;

int main(){
    int n;
    cin >> n;
    for (int i = n; i > 0; i /= 10)
    {
        ans += a[i%10];
    }
    cout << ans << endl;
    return 0;
}