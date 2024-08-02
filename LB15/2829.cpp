#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
int main(){
    double a;
    int w, p;
    while(cin >> a >> w >> p){
        stringstream ss;
        ss << setprecision(p) << setw(w) << a;
        cout << ss.str().size() << endl;
    }
    return 0;
}