#include<iostream>
#include<algorithm>

using namespace std;


int odd[10];
int even[10];
int main(){
    int x, a = 0, b = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        if(x%2){odd[a++] = x;}
        else{even[b++] = x;}
    }
    sort(odd,odd + a,greater<int>());
    sort(even,even + b);
    for (int i = 0; i < a; i++)
    {
        cout << odd[i] << ' ' ;
    }
    for (int i = 0; i < b; i++)
    {
        cout << even[i] << ' ';
    }
    return 0;
}