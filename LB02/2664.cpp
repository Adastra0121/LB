#include<iostream>

using namespace std;

int arr[10000010];

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= n;i++){
        cin >> arr[i];
    }
    for (int l = 1;l <= m;l++){
        int k,x,y;
         cin >> k;
        if(k > 0){ 
            cin >> x;
            for (int i = n + k; i >= x + k ; i--)
            { 
                arr[i] = arr[i - k];
            }
            for (int i = x; i <= x + k - 1; i++)
            {
                cin >> arr[i];
            }
            n += k;
        }
        if(k < 0){
            k = abs(k);
            int t;
            cin >> t;
            for (int i = k; i <= n - t; i++)
            {
                arr[i] = arr[i+t];
            }
            n -= t;
        } 

    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    
}