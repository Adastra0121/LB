#include<iostream>
using namespace std;

int main(){
    int a[10] = {65, 76, 89, 90, 76, 78, 97, 99, 82};
    int n, p = -1;
    cin >> n;
    for(int i = 0;i < 10;i++){
        if(n == a[i]) {p = i;break;}
    }
    if (p == -1) cout << "Not found!";
    else cout << p;
    return 0;
}