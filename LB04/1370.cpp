#include<iostream>
#include<algorithm>

using namespace std;

int height[35];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    sort(height,height+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << height[i] << ' ';
    }
    return 0;
}
