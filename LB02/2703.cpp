#include<iostream>

using namespace std;

int arr[1010];

int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        int l = arr[k];
        for (int i = k; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;
        k += l;
        if (l > 0)
        {
            k--;
            if(k > n){cout << "Right" <<'\n'<< n;return 0;}
        }
        if (l < 0)
        {
            if(k<=0){cout <<"Left"<<'\n'<<n;return 0;}
        }

    }
    
}