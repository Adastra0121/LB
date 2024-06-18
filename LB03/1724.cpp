#include<iostream>

using namespace std;

int a[] = {2, 3, 8, 11, 19, 24, 33, 49, 51, 67, 77, 81, 89, 94, 100};

int main(){
    string s = "Oops!";
    int L = 0,R = sizeof(a)/sizeof(a[1])-1,mid,x;
    cin >> x;
    while (L<=R)
    {
        mid = (L + R) / 2;
        cout << a[mid] << endl;
        if(a[mid] == x) {s = "Yeah!";break;}
        if(a[mid] > x) {R = mid - 1;}
        else {L = mid + 1;}
    }
    cout << s;
    return 0;
}