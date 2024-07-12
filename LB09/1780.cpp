#include<bits/stdc++.h>

using namespace std;

int poker[15], n, a;

int main(){
    cin >> n;
    while (n--) cin >> a,poker[a]++;
    for (int i = 1; i <= 13; i++)
    {
        if (poker[i]&& i==1) cout << char('A') << ' ' << poker[i] << endl;
        else if(poker[i]&& i>=2 && i <=10) cout << i << ' ' << poker[i] << endl;
        else if(poker[i]&& i== 11) cout << 'J' << ' ' << poker[i] << endl;
        else if(poker[i]&& i== 12) cout << 'Q' << ' ' << poker[i] << endl;
        else if(poker[i]&& i== 13) cout << 'K' << ' ' << poker[i] << endl;
    }
    return 0;
}