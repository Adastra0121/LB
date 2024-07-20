#include<iostream>
#include<iomanip>
using namespace std;
double max(double x,double y,double z){
    return max(max(x,y),z);
}
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3);
    cout << max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c));
    return 0;
}