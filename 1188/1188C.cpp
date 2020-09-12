//
// Created by Rivarrl on 2020/8/31.
//

/*
 * 1188-C. Array Beauty
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
int a[1005];

int main() {
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n);
    ll ans = 0;
    for (int i=0; i<=n-k; i++) {

    }
    cout << ans << endl;
    return 0;
}