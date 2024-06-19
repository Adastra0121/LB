#include<iostream>

using namespace std;

int arr[10010][7];

int main(){
    int n,maxn=0,minn=100,maxtotal= 0,mintotal = 300,p = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        maxn=0,minn=100;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            maxn = maxn < arr[i][j] ? arr[i][j] : maxn;
            minn = minn > arr[i][j] ? arr[i][j] : minn;
            arr[i][6] += arr[i][j];
        }
        arr[i][3] = i + 1;
        arr[i][4] = arr[i][1];
        arr[i][5] = arr[i][2];
        if(arr[i][6] <= 180) p++;
        maxtotal = maxtotal < arr[i][6] ? arr[i][6] : maxtotal;
        mintotal = mintotal > arr[i][6] ? arr[i][6] : mintotal;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 3; j <= 6; j++)
        {
            cout << arr[i][j]<<' ';
        }
        cout << endl;
    }
    cout << maxtotal << ' ' << mintotal << ' ' << p;
    return 0;
}