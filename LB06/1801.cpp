#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int eggs[10],maxn=0,t;

int main(){
    for (int i = 1; i <= 7; i++)
    {
        cin >> eggs[i];
        maxn = max(maxn,eggs[i]);
    }
    cout << "Day" ;
    for (int i = 1; i <= ceil(1.0*maxn/100); i++)
    {
        cout << setw(3) << i;
    }
    cout << endl;
    cout << "Mon";
    t = (int)ceil(1.0*eggs[1]/100);
    for (int i = 1; i <= t; i++)
    {
        cout << setw(3) << '*';
    }
    cout << endl;
    cout << "Tue";
    t = (int)ceil(1.0*eggs[2]/100);
    for (int i = 1; i <= t; i++)
    {
        cout << setw(3) << '*';
    }    
    cout << endl;
    cout << "Wed";
    t = (int)ceil(1.0*eggs[3]/100);
    for (int i = 1; i <= t; i++)
    {
        cout << setw(3) << '*';
    }
    cout << endl;
    cout << "Thu";
    t = (int)ceil(1.0*eggs[4]/100);
    for (int i = 1; i <= t; i++)
    {
        cout << setw(3) << '*';
    }    
    cout << endl;
    cout << "Fri";
    t = (int)ceil(1.0*eggs[5]/100);
    for (int i = 1; i <= t; i++)
    {
        cout << setw(3) << '*';
    }
    cout << endl;
    cout << "Sat";
    t = (int)ceil(1.0*eggs[6]/100);
    for (int i = 1; i <= t; i++)
    {
        cout << setw(3) << '*';
    }       
    cout << endl;
    cout << "Sun";
    t = (int)ceil(1.0*eggs[7]/100);
    for (int i = 1; i <= t; i++)
    {
        cout << setw(3) << '*';
    }     
}