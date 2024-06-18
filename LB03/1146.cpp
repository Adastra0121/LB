#include<iostream>

using namespace std;

int main(){
    int arr[] ={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n = 1;
    string s = "NO";
    cin >> n;
    for (int i = 0; i < 14; i++)
    {
        if(n%arr[i]==0) 
        {s = "YES";
         break;
        }
    }
    cout << s ;
    return 0;
}