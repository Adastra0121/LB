#include<iostream>

using namespace std;

int n, arr[1000010], x, a,ans = 0,temp,minn;

int main(){
    cin >> n >> x;
    while(n--){
        cin >> a;
        arr[a]++;
    }
    minn = x + 1;
    for (int i = 1; i <= x; i++)
    {
        if(arr[i]>0 && minn >= arr[i]){
            minn = arr[i];
            temp = i;
        }
    }
    cout << temp << ' ' << minn;
    return 0;
}
