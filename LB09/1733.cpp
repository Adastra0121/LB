#include<iostream>

using namespace std;

int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int m;
    cin >> m;
    cout << days[m];
    return 0;
}