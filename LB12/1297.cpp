#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
const double EPSILON = 1e-6;
using namespace std;
int n;

double a[110];
bool cmp(double &x,double &y){
    if (fabs(fabs(x-round(x)) - fabs(y-round(y))) < EPSILON) return x < y;
    else return fabs(x-round(x)) < fabs(y-round(y));
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1,cmp);
    for (int i = 1; i <= n; i++) cout << fixed << setprecision(6) << a[i] << ' ';
}