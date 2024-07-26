#include<cstdio>
int main(){
    int ans = 0;
    char c;
    while (scanf("%c",&c) != -1)
    {
       if (c >= '0'&& c <= '9')
       {
            ans += c - '0';
       }
    }
    printf("%d",ans);
    return 0;
}