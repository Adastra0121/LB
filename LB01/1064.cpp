#include<iostream>

using namespace std;

int main(){
    int arr[10],cnt = 0,height;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cin >> height;
    height += 30;
    for (int i = 0; i < 10; i++)
    {
        if(height>=arr[i]) cnt++;
    }
    cout << cnt ;
    return 0;
}