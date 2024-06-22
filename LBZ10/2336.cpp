#include<iostream>

using namespace std;

void slove(int x, int y){
    int d = x;
    while(x >= y){
        x -= y;
        d += 1;
        x++;
    }
    cout << d<< endl;
}

int main(){
    int m, k;
    while(cin >> m >> k && (m || k)){
        slove(m,k);
    }
    return 0;
}