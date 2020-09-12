//
// Created by Rivarrl on 2020/8/9.
//

/*
 * 1197-A. DIY Wooden Ladder
 */

#include <bits/stdc++.h>

using namespace std;
int T, n, tmp;

int main() {
    cin >> T;
    while (T--) {
        int m1=0, m2 = 0;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> tmp;
            if (tmp > m1) {
                m2 = m1;
                m1 = tmp;
            } else if (tmp > m2) {
                m2 = tmp;
            }
        }
        cout << min(m2-1, n-2) << endl;
    }
    return 0;
}