#include<iostream>
#include<algorithm>

using namespace std;

int arr[500];
int narr[500];
int main(){
    int n, j = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2){
            narr[j++] = arr[i];
        }
    }
    cout << narr[0];
    for (int i = 1; i < j; i++)
    {
        cout << ',' << narr[i];
    }
    
    return 0;
}