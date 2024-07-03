#include<iostream>

using namespace std;

int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int y, m, d, ans = 0;
    cin >> y >> m >> d;
    if(y%4==0&&y%100!=0 || y%400==0) days[2] = 29;
    for (int i = 1; i < m; i++)
    {
        ans += days[i];
    }
    ans += d;
    cout << ans;
    return 0;
}