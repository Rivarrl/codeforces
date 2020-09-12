//
// Created by Rivarrl on 2020/8/9.
//

/*
 * 1197-D. Yet Another Subarray Problem
 */
#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int a[300005];
int b[300005];
int main() {
    long long ans = 0;
    cin >> n >> m >> k;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<m; i++) {
        for (int j=1; j<=n; j++) {
            b[j] = a[j];
            if (j%m==i) b[j] -= k;
        }
        long long tmp = 0;
        for (int j=1; j<=n; j++) {
            tmp += b[j];
            if (j%m==i) ans = max(ans, tmp);
            tmp = max(tmp, 0ll);
        }
    }
    cout << ans << endl;
}