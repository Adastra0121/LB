#include<iostream>

using namespace std;

int arr[10002];

int main(){
    int n, t,prisoner,p,line = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        switch (t)
        {
        case 1:
            cin >> prisoner;
            arr[++line] = prisoner;
            break;
        case 2:
            cin >> prisoner >> p;
            for (int j = ++line; j > p; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[p] = prisoner;
            break;
        case 3:
            cin >> prisoner >> p;
            for (int j = p; j < line; j++)
            {
                arr [j] = arr[j+1];
            }
            line--;
            break;
        case 4:
            cin >> p;
            for (int j = p - 1; j < line - 1; j++)
            {
                arr[j] = arr[j + 2];
            }
            line -= 2;
            break;
        default:
            break;
        }
    }
    for (int i = 1; i <= line; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}