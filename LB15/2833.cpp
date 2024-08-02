#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    string s;
    cin >> n;
    getline(cin, s);
    while(getline(cin, s)){
        stringstream ss(s);
        while (ss >> x)
        {
            if(x != n){
                cout << x << ' ';
            }else{
                break;
            }
        }
        cout << endl;
    }
    cout << "end";
    return 0;
}