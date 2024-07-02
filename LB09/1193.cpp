#include<iostream>

using namespace std;

string s[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int n, x;

int main(){
    cin >> n;
    while (n--) cin >> x, cout << s[x] << endl;
    return 0;
}