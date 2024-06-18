#include<iostream>
#include<algorithm>

using namespace std;

int grades[1010];

int main(){
    int score, n;
    double percent, p;
    cin >> score >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> grades[i];
    }
    sort(grades + 1,grades + n +1,greater<int>());
    for (int i = 1; i <= n; i++)
    {
        if(score == grades[i]) p = i;
    }
    percent = p / n;
    //cout << percent << endl;
    if(percent <= 0.1){cout << 'A';}
    else if(percent <= 0.3) cout << 'B';
    else if(percent <= 0.6) cout << 'C';
    else if(percent <= 0.8) cout << 'D';
    else cout << 'E';
    return 0;
}