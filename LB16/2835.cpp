#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n, getline(cin, s);
    while(n--){
        getline(cin, s);
        int a, b, c, d;
        if(sscanf(s.c_str(),"%d%d%d%d", &a, &b, &c, &d) != 4) puts("Partial");
        else if(a > 255 || b > 255 || c > 255 || d > 255) puts("Overflow");
        else printf("%d.%d.%d.%d\n", a, b, c, d);
    }
    return 0;
}