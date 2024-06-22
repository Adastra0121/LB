#include<iostream>
#include<algorithm>
using namespace std;

int a[15];

int main(){
    int n,k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i],k++;;
        sort(a + 1, a + i +1);
        for (int j = 1; j <= k; j++)
        {
            cout << a[j] << ' ';
        }
        cout << endl;
    }
    return 0;
}