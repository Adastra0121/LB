#include<iostream>
#include<algorithm>

using namespace std;

int arr[160][160], n, m, num;
int s[10];

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            s[1] = arr[i][j];
            s[2] = arr[i][j+1];
            s[3] = arr[i][j-1];
            s[4] = arr[i+1][j];
            s[5] = arr[i+1][j+1];
            s[6] = arr[i+1][j-1];
            s[7] = arr[i-1][j];
            s[8] = arr[i-1][j+1];
            s[9] = arr[i-1][j-1];
            sort(s+1,s+10,greater<int>());

            if((i == 1 && j == 1)||(i == 1&&j==m)||(i == n && j==1)||(i == n && j ==m)){
            cout << (s[2] + s[3]) / 2<< ' ';
            }
            else if(i == 1|| i == n || j ==1 ||j ==m){
            cout << (s[3] + s[4]) / 2 << ' ';
            }
            else{
            cout << s[5] << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}