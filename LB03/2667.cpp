#include<iostream>

using namespace std;

int arr[304];

int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n - 3; i++)
    {
        if (arr[i]>=k) continue;
        for (int j = i + 1; j <= n - 2; j++)
        {
            if(arr[i] + arr[j]>=k) continue;
            for (int c = j +1; c <= n - 1; c++)
            {
                
                if(arr[i] + arr[j] + arr[c] >= k) continue;

                for (int d = c +1; d <= n; d++)
                {
                    if(arr[i] + arr[j] + arr[c] + arr[d]== k){
                        cout << arr[i] << ' '
                            << arr[j] << ' '
                            << arr[c] << ' '
                            << arr[d];
                            return 0;
                    }
                    
                }
                   
            }
        }
    }
}
