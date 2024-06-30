#include<iostream>

using namespace std;

int arr[22][22];

int main(){
    int n;
    string s = "Yes";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int hang = 0, lie = 0, zheng = 0, fu = 0;
    for (int i = 1; i <= n; i++)
    {
        zheng += arr[i][i];
        fu += arr[i][n+1-i];
        hang += arr[1][i];
        lie += arr[i][1];
    }
    for (int i = 2; i <= n; i++)
    {
        int temp = 0;
        for (int j = 1; j <= n; j++)
        {
            temp += arr[i][j];
        }
        if(temp != hang) s = "No";
    }
    for (int i = 2; i <= n; i++)
    {
        int temp = 0;
        for (int j = 1; j <= n; j++)
        {
            temp += arr[j][i];
        }
        if(temp != lie) s = "No";
    }
    if(hang != lie || hang != zheng || hang != fu || lie != zheng || lie != fu || zheng != fu)
        s = "No";
    cout << s;
    return 0;
}