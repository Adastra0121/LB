#include<iostream>

using namespace std;

int arr[1002];

int main(){
    int n, x, p = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            if (p == 0)
            {
                continue;
            }
            else{
                arr[p--]=0;
            }
        }
        else {
            int y;
            cin >> y;
            arr[++p] = y;
        }
    }
    for (int i = 1; i <= p; i++)
    {
        cout << arr[i] << ' ';
    }
    

    return 0;
}