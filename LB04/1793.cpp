#include<iostream>
#include<algorithm>

using namespace std;

int arr[4];

int main(){
    int n, a, b, c=0,i = 0;
    cin >> n; 
    c = n;
    while(c!=6174){
        i = 0;
        for(;c>0;c/=10){
            arr[i++] = c % 10;
        }
        sort(arr,arr+4,greater<int>());
        a = 1000 * arr[0] + 100 * arr[1] + 10 * arr[2] + arr[3];
        b = 1000 * arr[3] + 100 * arr[2] + 10 * arr[1] + arr[0];
        c = a - b;
        cout << a << '-' << b << '=' << c << endl;
    }
    if(a!=7641&&b!=1467&&c==6174) cout << "7641-1467=6174";
}