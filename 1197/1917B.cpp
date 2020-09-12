//
// Created by Rivarrl on 2020/8/9.
//

/*
 * 1197-B. Pillars
 */

#include <bits/stdc++.h>
using namespace std;
int n;
int a[200005];
int main() {
    cin >> n;
    int m=0, mi=0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i] > m) {
            m = a[i];
            mi = i;
        }
    }
    int l=mi, r=mi+1;
    int ans = 1;
    while (l >= 0 or r < n) {
        if (l < 0) {
            while (r < n) {
                if (a[r++] != m--) ans = 0;
            }
        } else if (r == n) {
            while (l >= 0) {
                if (a[l--] != m--) ans = 0;
            }
        } else {
            if (a[l] == m) {
                l--;
            } else if (a[r] == m) {
                r++;
            } else {
                ans = 0;
            }
            m--;
        }
        if (ans == 0) break;
    }
    if (ans==0) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}