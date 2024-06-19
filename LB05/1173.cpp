#include<iostream>
#include<cstring>

using namespace std;

char name[20];
char id[10];

int main(){
    int n;
    string s = "VALID";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = "VALID";
        //fgets(name,sizeof(name),stdin);
        //fgets(id,sizeof(id),stdin);
        cin >> name >> id;
        if(strlen(name) < 7 || strlen(name) > 10) s = "INVALID";
        if(strlen(id) != 6) s = "INVALID";
        cout << s << endl;
    }
    return 0;
}