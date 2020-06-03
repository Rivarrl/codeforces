//
// Created by Rivarrl on 2020/6/3.
//
/**
 * # 116-A. Tram
 * 模拟上下车人数变化，过程中取max
 */

#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;

int main() {
    int n, a, b;
    int cur = 0, ans = 0;
    scanf("%d", &n);
    for (;n > 0;n--) {
        scanf("%d%d",&a,&b);
        cur += (b - a);
        ans = max(ans, cur);
    }
    printf("%d", ans);
    return 0;
}