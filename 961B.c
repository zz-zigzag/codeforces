#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))


typedef long long ll;

#define M 100010

int a[M], t[M], sum[M], temp[M];

void solve() {
    int n, k;
    scanf("%d%d", &n, &k);
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &t[i]);
    }
    for (int i = 1; i <= n; ++i) {
        sum[i] = (a[i]*(1-t[i]) + sum[i-1]);
        ans += a[i]*t[i];
    }
    int max = 0;
    for (int i = k; i <= n; ++i) {
        temp[i] = sum[i] - sum[i-k];
        max = MAX(temp[i], max);
    }
    printf("%d\n", ans + max);
    return ;
};
int main() {
    solve();
    return 0;
}