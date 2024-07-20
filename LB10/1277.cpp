#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s,s3[110];
    cin >> n;
    for (int j= 1; j <= n; j++)
    {
        cin >> s;
        s.front() = toupper(s.front());
        for (int i = 1; i <= s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        s3[j] = s;
    }
    sort(s3+1,s3+n+1);
    for (int i = 1; i <= n; i++)
    {
        cout << s3[i] << endl;
    }
    return 0;
}