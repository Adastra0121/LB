#include<iostream>
#include<cmath>
int d(int a1,int b1,int a2,int b2){
    return abs(a1-a2)+abs(b1-b2);
}
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << d(x1, y1, x2, y2) + d(x1, y1, x3, y3) + d(x2, y2, x3, y3);
    return 0;
}