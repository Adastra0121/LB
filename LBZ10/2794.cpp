#include<iostream>

using namespace std;

bool check(int x){
    if(x < 2) return false;
    for (int i = 2; i * i <= x; i++)
    {
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int n, cnt = 0;
    cin >> n;
    for (int i = 7; i <= n; i++)
    {
        cnt += i % 10 == 7 && check(i);
    }
    cout << cnt;
    return 0;
}