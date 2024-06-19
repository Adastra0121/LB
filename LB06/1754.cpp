#include<iostream>
#include<iomanip>

using namespace std;

int n,grades[85][10],temp;
double aver;

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        temp = 0;
        cin >> grades[i][0];
        for (int j = 1; j <= 6; j++)
        {
            cin >> grades[i][j];
            temp += grades[i][j];
            grades[n+1][j] += grades[i][j];
            grades[n+1][7] += grades[i][j];
        }
        grades[i][7] = temp;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << setw(3) << grades[i][0];
        for (int j = 1; j <= 7; j++)
        {
            cout << setw(6) << grades[i][j];
        }
        cout << endl;
    }
    cout << "avg" << fixed << setprecision(1); 
    for (int j = 1; j <= 7; j++)
    {
        cout << fixed << setw(6) << 1.0* grades[n+1][j] / n;
    }
    return 0;
}