#include<iostream>

using namespace std;

bool arr[210][110];

int main(){
    int m, n, t;
    double similarity = 0;
    cin >> m >> n;    
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> t;
            if(t == arr[i][j]) similarity++;
        }
    }
    printf("%.2lf",100 * similarity / (n * m));
    return 0;
}