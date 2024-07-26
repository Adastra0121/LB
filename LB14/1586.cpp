#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, m, s, n;
    scanf("The Starting Time is %d:%d:%d.", &h, &m, &s);
    cin >> n;
    s += n;
    m += s / 60, s %= 60;
    h += m / 60, m %= 60;
    h %= 24; 
    printf("%d:%d:%d", h, m, s);
    return 0;
}