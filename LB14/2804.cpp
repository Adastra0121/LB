#include<iostream>
int n, a, b, c;
double d, e, f;
int main(){
    scanf("%d", &n);
    while(n--) {
        std::cin >> a >> b >> c >> d >> e >> f;
        printf("%6d %-5d%04d%8.6g %-6.f%.8f\n",a,b,c,d,e,f);
    }
}