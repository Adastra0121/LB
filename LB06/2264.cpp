#include<iostream>
#include<cstring>

using namespace std;

char s[100][100];

int main(){
    char c[15];
    cin >> c;
    int len = 0;
    for (int i = 0; c[i]; i++)
    {
        len++;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5*len - (len -1); j++)
        {
            s[i][j]='.';
        }
    }
    
    for (int i = 1; i <= len; i++)
    {
        s[1][4*i-1] = '#';
        for (int j = 1; j <= 2 * len; j++)
        {
            s[2][2*j] = '#';
            s[4][2*j] = '#';
        }
        s[3][4*i-1] = c[i-1];
        s[3][4*i-3] = '#';
        s[3][4*i+1] = '#';
        s[5][4*i-1]= '#';
    }
    
    for (int i = 1; i <= len; i++)
    {
        if(i%3 == 0){
            int k = i / 3;
            s[1][12*k-1] = '*';
            s[5][12*k-1] = '*';
            s[2][12*k-2]='*';
            s[2][12*k] = '*';
            s[4][12*k-2]='*';
            s[4][12*k] = '*';
            s[3][12*k-3] ='*';
            s[3][12*k+1]='*'; 
        }
    }
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5*len - (len -1); j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
}