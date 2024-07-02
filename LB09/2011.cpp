#include<iostream>

using namespace std;

int s[110], x, k;

int main(){
    cin >> k;
    for (int i = 1; i <= k; i++) cin >> x,s[x]++;
    for (int i = 1; i <= 100; i++) cout << s[i] << endl;
    return 0;
}