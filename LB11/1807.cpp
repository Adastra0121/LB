#include<iostream>

using namespace std;

int a, b, c, t = 10001;

int winner(int x, int y, int z){
    return max(max(x,y),z);
}

int main(){
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b >> c;
        t = min(winner(a,b,c),t);
    }
    cout << t;
    return 0;
}