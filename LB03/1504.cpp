#include<iostream>

using namespace std;

int arr[1002];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int q,p,x;
    int flag = 0;
    cin >> q;
    while (q--)
    {
        flag = 0;
        cin >> p;
        for (int i = 1; i <= n; i++)
        {
            if(p == arr[i]) {
                x = i;
                flag = 1;
                break;
            }
        }
        if (flag != 0) cout << x << endl;
        else cout << 0 << endl;
    }
    return 0;
    
}