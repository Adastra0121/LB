#include<iostream>

using namespace std;

int arr[1010];

int main(){
    int n,learning = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        learning = 0;
        int temp = 1000000,min_temp;
        for (int j = 1; j <= n; j++)
        {
            if (arr[i] < arr[j])
            {
                min_temp = arr[j]-arr[i];
                if(min_temp < temp){
                    learning = j;
                    temp = min_temp;
                }
            }   
        }
        cout << learning << endl;
    }
    return 0;
}