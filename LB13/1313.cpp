#include<bits/stdc++.h>
using namespace std;

struct Xs{
    string n ;
    int m , c , e , d , sum;
}xs[110];

bool cmp1(Xs &a1 , Xs &b1){
    if(a1.m != b1.m) return a1.m > b1.m;
    return a1.n < b1.n;
}
bool cmp2(Xs a1 , Xs b1){
    if(a1.c != b1.c)  return a1.c > b1.c;
    return a1.n < b1.n;
}
bool cmp3(Xs a1 , Xs b1){
    if(a1.e != b1.e) return a1.e > b1.e;
    return a1.n < b1.n;
}
bool cmp4(Xs a1 , Xs b1){
    if(a1.d != b1.d) return a1.d > b1.d;
    return a1.n < b1.n;
}
bool cmp5(Xs a1 , Xs b1){
    if(a1.sum != b1.sum) return a1.sum > b1.sum;
    return a1.n < b1.n;
}




int main() {
    int n ;
    cin >> n ;
    for(int i = 0 ;  i < n ; i++){
        cin >> xs[i].n >> xs[i].m >> xs[i].c >> xs[i].e  >> xs[i].d;
        xs[i].sum += xs[i].c + xs[i].m + xs[i].e +xs[i].d;
    }
    
    sort(xs , xs + n ,cmp1);
    for(int i = 0 ; i < 4 ; i++){
        cout <<  xs[i].n  <<' ';
    }
    cout << endl;
    
    
    sort(xs , xs + n ,cmp2);
    for(int i = 0 ; i < 4 ; i++){
        cout <<  xs[i].n  <<' ';
    }
    cout << endl;
    
    
    sort(xs , xs + n ,cmp3);
    for(int i = 0 ; i < 4 ; i++){
        cout <<  xs[i].n  <<' ';
    }
    cout << endl;
    
    
    sort(xs , xs + n ,cmp4);
    for(int i = 0 ; i < 4 ; i++){
        cout <<  xs[i].n  <<' ';
    }
    cout << endl;
    
    
    sort(xs , xs + n ,cmp5);
    for(int i = 0 ; i < 4 ; i++){
        cout <<  xs[i].n  <<' ';
    }

    return 0;
}