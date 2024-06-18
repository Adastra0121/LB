#include<iostream>

using namespace std;

int arr[5010];
int p[5010];

int main(){
    int n,temp=50000,p1=5000,p2=5000,cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(abs(arr[i] - arr[j]) < temp && abs(arr[i] - arr[j])){
                temp = abs(arr[i] - arr[j]);
                cnt = 1;
                p1 = i, p2 = j;
            }else if(temp == abs(arr[i] - arr[j])){
                cnt++;
            }    
        }
    }
    cout << cnt << endl;
    cout << p1 << ' ' << p2 << endl;
    return 0;
}