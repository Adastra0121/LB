#include <bits/stdc++.h>
using namespace std;
struct s {
    int capacity;
    long long passion;
}player[100002];

bool cmp(struct s t1, struct s t2) {
    return t1.capacity < t2.capacity;
}
 
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%d %lld", &player[i].capacity, &player[i].passion);
    }
    int x;
    cin >> x;
    sort(player + 1, player + n + 1, cmp);
    for (int i = 2; i <= n; i++) {
        player[i].passion += player[i - 1].passion;
    }
    int pl = 1, pr = 1;
    long long maxb = 0;
    while (pr <= n) {
        while (player[pr].capacity - player[pl].capacity <= x && pr <= n) {
            pr++;
        }
        maxb=max(maxb, player[pr - 1].passion - player[pl - 1].passion);
        while (player[pl].capacity == player[pl + 1].capacity) {
            pl++;
        }
        pl++;
    }
    cout << maxb << endl;
    return 0;
}