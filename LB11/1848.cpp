#include<iostream>
using namespace std;
char s1[10010], s2[10010], s3[10010];
void trans(char *a,char *b){
    for (int i = 0; a[i]; i++)
    {
        if(b[i] < a[i]) swap(a[i],b[i]);
    }
    
}
int main(){
    cin >> s1 >> s2 >> s3;
    trans(s1, s2), trans(s2, s3), trans(s3, s1);
    puts(s1), puts(s2), puts(s3);
    return 0;
}