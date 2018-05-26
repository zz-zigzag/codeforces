#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define EXP 1e-8
#define MOD 1e9+7
#define INF 1e9+7
typedef long long LL;

#define M 100010

LL n, sum, ans, min = INF;
LL a[M], s[M];

void doit(int c, LL aim) {
    ans = abs(c);
    for (int i = 1; i < n; i++) {
        c = s[i] - aim + c;
        if (abs(c) > 1) {
            return;
        }
        ans += abs(c);
    }
    min = MIN(ans, min);
}
void process(LL ss) {
    if (ss % (n - 1) != 0) {
        return;
    }
    LL aim = ss / (n - 1);
    doit(0, aim);
    doit(1, aim);
    doit(-1, aim);
}
void solve() {
    while(scanf("%I64d", &n)!=EOF) {
        min = INF;
        for (int i = 0; i < n; ++i) {
            scanf("%I64d", &a[i]);
        }
        if (n < 3) {
            printf("0\n");
            continue;
        }
        sum = 0;
        for (int i = 1; i < n; ++i) {
            s[i] = a[i] - a[i-1];
            sum += s[i];
        }
        process(sum+2);
        process(sum+1);
        process(sum);
        process(sum-1);
        process(sum-2);
        printf("%I64d\n", min == INF ? -1 : min);
    }
}

int main() {
    solve();
    return 0;
}
