#include<iostream>

using namespace std;

int arr[10002];

int main(){
    int n, m, k,sum = 0,x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    cout << sum << endl;
    cout << int(1.0 * sum / n) << endl;
    cin >> m;
    for (int i = 1; i <= m; i++){
        cin >> x;
        cout << arr[x] << ' ';
    }
    cout << endl;
    cin >> k;
    while (k--)
    {
        int p,q,max,min;
        cin >> p >> q;
        max = arr[p],min = arr[p];
        for (int i = p; i <= q; i++)
        {
        max = max > arr[i] ? max : arr[i];
        min = min < arr[i] ? min : arr[i];
        }
        cout << max << ' ' << min << endl;
    }
    return 0;
}