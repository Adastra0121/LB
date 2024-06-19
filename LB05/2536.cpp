#include<iostream>
#include<cstring>

using namespace std;

char s[1010];

int main(){
    int total = 0;
    cin >> s;
    cout << strlen(s);
    while(strlen(s)>1){
        total = 0;
        for (int i = 0; s[i]; i++)
        {
            total += s[i] - '0';
        }
        //cout << total << endl;
        for (int k = 0;total > 0;total /= 10)
        {

            s[k++] = char('0' + total % 10);
        }
    }
    cout << s;
}