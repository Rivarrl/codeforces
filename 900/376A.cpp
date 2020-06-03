//
// Created by Rivarrl on 2020/6/3.
//
/**
 * # 376-A. Lever
 * 杠杆平衡定理，左右质量*力矩相等时平衡。
 */

#include <stdio.h>
#include <string.h>
#define ll long long
#define MAXNUM 1000005

int main() {
    char s[MAXNUM];
    scanf("%s", s);
    ll n = strlen(s);
    ll j, lsum, rsum;
    j = lsum = rsum = 0;
    for (ll i=0;i<n;i++) {
        if (s[i] == '^') {
            j = i;
            break;
        }
    }
    for (ll i=1;i<=j;i++) {
        if (s[j-i] == '=') continue;
        lsum += (s[j-i] - '0') * i;
    }
    for (ll i=1;i+j<n;i++) {
        if (s[j+i] == '=') continue;
        rsum += (s[j+i] - '0') * i;
    }
    if (lsum > rsum)
        printf("left\n");
    else if (lsum < rsum)
        printf("right\n");
    else
        printf("balance\n");
    return 0;
}