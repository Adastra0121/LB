#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int x,y,a[110];
bool cmp(int &x,int & y){
    int xx = 0,yy = 0,m = 0,n = 0;
    for (int i = x; i > 0; i/=10) m++;
    for (int i = y; i > 0; i/=10) n++;
    for (int i = x,j = pow(10,m-1); i > 0; i/=10,j/=10) xx += i % 10 * j; 
    for (int i = y,j = pow(10,n-1); i > 0; i/=10,j/=10) yy += i % 10 * j;
    if (xx == yy) return m < n;
    else return xx < yy;
}
int main(){
    cin >> x >> y;
    int t = x;
    for (int i = 1; i <= y - x +1; i++) a[i] = t++;
    sort(a+1,a+2+y-x,cmp);
    for (int i = 1; i <= y - x + 1; i++) cout << a[i] << endl;
    return 0;
}