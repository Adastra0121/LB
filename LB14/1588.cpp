#include<cstdio>
int main(){
    int n, sum1 = 0, sum2 = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) sum1 += i * i;
    for (int i = 1; i <= n; i++) sum2 += i * i * i;
    printf("%010d %010d\n", sum1, sum2);
    return 0;
}