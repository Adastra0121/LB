#include<cstdio>
#include<algorithm>
int ball[100010], ans[100010], n, m, t;
struct K
{
    int id,height;
}kids[100010];
bool cmp1(K x,K y){
    return x.height<y.height;
}
int main(){
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++) 
        scanf("%d",&kids[i].height),kids[i].id = i;
    for (int i = 1; i <= m; i++) 
        scanf("%d",&ball[i]);
    std::sort(ball+1,ball+m+1);
    std::sort(kids+1,kids+n+1,cmp1);
    for (int i = 1, j = 1; i <= n; i++)
    {
        while (j <= m && kids[i].height >= ball[j])
        {
            j++;
            ans[kids[i].id]++;
        }
    }
    for (int i = 1; i <= n; i++) 
        printf("%d\n",ans[i]);
    return 0;
}