#include<iostream>

using namespace std;

long long lucky[20002];

int main(){
    int m;
    
    for(int i = 1; i <= 1000; i++){
        lucky[i * 2] = lucky[i] * 10 + 4;
        lucky[i * 2 + 1] = lucky[i] * 10 + 7;
        if(lucky[i*2] > 1e9){
            m = i * 2 -1;
            break;
        }
    }
     
    int n;
    while(cin >> n){
        string str = "NO";
        for(int i = 2; i < m; i++){
            if(n % lucky[i] == 0) str = "YES";
        }
        cout << str << endl;
    }
     
    return 0;
}