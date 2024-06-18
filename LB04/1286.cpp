#include<iostream>
#include<algorithm>

using namespace std;

int arr[10010];

int main(){
    int n,l1,r1,l2,r2;
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + l1,arr + r1 +1);
    sort(arr + l2,arr + r2 +1,greater<int>());
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}