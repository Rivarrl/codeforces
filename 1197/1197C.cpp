//
// Created by Rivarrl on 2020/8/9.
//

/*
 * 1197-C. Array Splitting
 */

#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[300005], b[300005];
typedef long long ll;

int main() {
    cin >> n >> k;
    cin >> a[0];
    for (int i=1; i<n; i++) {
        cin >> a[i];
        b[i] = a[i] - a[i-1];
    }
    sort(b+1, b+n);
    ll ans = 0;
    for (int i=1; i<=n-k; i++) {
        ans += (ll)b[i];
    }
    cout << ans << endl;
    return 0;
}