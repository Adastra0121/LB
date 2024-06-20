#include<iostream>

using namespace std;

int arr[2010];

int main(){
    int n, m, t;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> t;
        if(t >= arr[n]) {
            arr[++n] = t;
            continue;
        }
        for (int j = 0; j <= n; j++)
        {
            if (arr[j] > t)
            {
                for (int k = n; k >= j; k--)
                {
                    arr[k + 1] = arr[k];
                }
                arr[j] = t;
                n++;
                break;
            }
        }
    }
        for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}