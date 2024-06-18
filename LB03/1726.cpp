#include<iostream>

using namespace std;

int arr[100010];

int main(){
    int n, m, x,p = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while(m--){
        cin >> x;
        p = -1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == x) p = i;
        }
        cout << p << ' ';
    }
    return 0;
}