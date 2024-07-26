#include<cstdio>
int main(){
    int x;
    long long ans = 0;
    while (scanf("%d",&x) != -1) ans += x;
    printf("%lld",ans);
    return 0;    
}