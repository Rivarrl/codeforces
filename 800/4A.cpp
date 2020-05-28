//
// Created by Administrator on 2020/5/28.
//
/**
 * #4 A. Watermelon
 * 判断一个数能否拆分为两个偶数
 */
#include <stdio.h>
int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n%2==0 && n > 2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}