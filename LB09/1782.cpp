#include<iostream>

using namespace std;

int n, x;
bool a[20010];

int main(){
    cin >> n;
    while(n--){
        cin >> x;
        if(a[x]) continue;
        a[x] = true,cout << x << ' ';
    }
    return 0;
}