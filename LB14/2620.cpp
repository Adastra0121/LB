#include<cstdio>
#include<cmath>
#include<algorithm>
int main(){
    long long k, d, e;
    long long n;
    scanf("%lld",&k);
    while (k--)
    {
        scanf("%lld%lld%lld",&n,&e,&d);
        long long pPlusq = n - e*d + 2;
        long long pMinusq = sqrt(pPlusq * pPlusq - 4 * n);
        long long p = (pPlusq + pMinusq) / 2;
        long long q = pPlusq - p;
        long long maxn = p > q ? p : q;
        long long minn = p < q ? p : q;
        if(p * q != n && pMinusq * pMinusq != pPlusq - 4 * n){
            printf("NO\n");
        }else{
            printf("%lld %lld\n",minn,maxn);
        }
    }   
    return 0;
}