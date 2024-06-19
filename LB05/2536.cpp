#include<iostream>
#include<cstring>

using namespace std;

char s[1010];

int main(){
    int total = 0,ans = 0;
    cin >> s;  
    for (int i = 0; s[i]; i++)
    {
        total += s[i] - '0';
    }
    while(total>9){
        ans = 0;
        for (; total>0; total /= 10)
        {
            ans += total % 10;
        }
        total = ans;
    }
    cout << total;
    return 0;
}