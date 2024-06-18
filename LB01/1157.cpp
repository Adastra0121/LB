#include<iostream>

using namespace std;

int arr[1002];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt1,cnt2,cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt1 = 0,cnt2 = 0;
        for (int j = 0; j < i;j++)
        {
            if(arr[j] > arr[i]) {cnt1++;}
        }
        for (int k = i; k < n; k++)
        {
            if(arr[k] > arr[i]) {cnt2++;}
        }
        if(cnt1 == cnt2) {cnt++;}
    }

    cout << cnt ;
    return 0;
}