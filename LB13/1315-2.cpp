#include<cstdio>
#include<algorithm>
int ball[100010], n, m, t;
struct K
{
    int id,height,num;
}kids[100010];
bool cmp1(K x,K y){
    return x.height<y.height;
}
bool cmp2(K x,K y){
    return x.id < y.id;
}
int main(){
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++) scanf("%d",&kids[i].height),kids[i].id = i;
    for (int i = 1; i <= m; i++) scanf("%d",&ball[i]);
    std::sort(ball+1,ball+m+1);
    std::sort(kids+1,kids+n+1,cmp1);
    for (int i = 1; i <=n; i++){
        t = 0;
        for (int j = 1; j <= m && ball[j] <= kids[i].height; j++)
        {
            if (ball[j] == 0) continue;
            ball[j] = 0, t++;
        }
        kids[i].num = t;
    }
    std::sort(kids+1,kids+1+n,cmp2);
    for (int i = 1; i <= n; i++) printf("%d\n",kids[i].num);
    return 0;
}