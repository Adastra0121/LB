#include<iostream>

using namespace std;

int arr[100002];

int main(){
    int n, x, k,p = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x ;
        if(x > 0) {
            arr[++p] = x;
        }
        else if (x < 0){
            int y;
            cin >> y;
            for (int j = abs(x); j <= p - y; j++)
            {
                arr[j] = arr[j + y];
            }
            p -= y;
        }
    }
    for (int i = 1; i <= p; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0; 
}