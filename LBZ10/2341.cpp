#include<iostream>

using namespace std;

void elevator(int n){
    int a = 0, t = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if(x > a) t += 6 * (x - a);
        else t += 4 * (a - x);
        t += 5;
        a = x;
    }
    cout << t << endl;
}
int main(){
    int x;
    while(cin >> x && x){
        elevator(x);
    }
    return 0;
}