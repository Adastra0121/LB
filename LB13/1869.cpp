#include<iostream>
#include<cstring>
using namespace std;
struct S
{
    char name[30];
    int c, m, e, s;
    void print(){
        cout << name << ' ' << c << ' ' << m << ' ' << e <<' ' << s << endl;
    }
}stu[110];
int n, k;
char s[30];
int find(char s[],int n){
    for (int i = 1; i <= n; i++){
        if(strcmp(stu[i].name, s) == 0){
            return i;
        }
    }
    return -1;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> stu[i].name >> stu[i].c >> stu[i].m >> stu[i].e;
        stu[i].s = stu[i].c + stu[i].m + stu[i].e;
    }
    cin >> k;
    while (k--)
    {
        cin >> s;
        int id = find(s, n);
        if(id == -1) cout << "404\n";
        else stu[id].print();
    }
    return 0;
}