#include<bits/stdc++.h>

using namespace std;

int n, arr[5],a;

int main(){
    cin >> n;
    while(n--) cin>>a,arr[a]++;
    int maxid, maxnn = 0;
    for (int i = 1; i <= 3; i++)
    {
        if (maxnn < arr[i]) maxnn = arr[i], maxid = i;
    }
    cout << maxid << ' ' << maxnn;
    return 0;
}