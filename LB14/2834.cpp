#include<cstdio>
using namespace std;
int main(){
    int n, y, m, d, area, id;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%4d%2d%2d%3d%d", &y, &m, &d, &area, &id);
        printf("birth=%d-%d-%d,area=%d,id=%d\n", y, m, d, area, id);
    }
    return 0;
}