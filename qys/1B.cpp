//
// Created by Rivarrl on 2020/9/13.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int k, n, x;
int a[1000005];
int main() {
    scanf("%d%d", &n, &k);
    int m = 0;
    for (int i=0;i<n;i++) {
        scanf("%d", &x);
        m = max(m, x);
        a[x]++;
    }
    int ctr = 0, ans = 0;
    for (int i=1; i<=m; i++) {
        ctr = 0;
        for (int j=1; i*j<=m; j++) {
            ctr += a[i*j];
            if (ctr >= k) {
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}