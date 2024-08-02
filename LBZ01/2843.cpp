#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a, q;
    int n;
    cin >> a >> q >> n;
    printf("%g %g", a * pow(q,n - 1), a * (1 - pow(q,n)) / (1 - q));
    return 0;
}