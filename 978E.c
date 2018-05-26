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

int n, w, t, s;
int min ,max, ans;
void solve() {
    while(scanf("%d%d", &n, &w)!=EOF) {
        min = max = s = 0;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &t);
            s += t;
            min = MIN(min, s);
            max = MAX(max, s);
        }
        ans = min+(w-max)+1;
        printf("%d\n", ans > 0 ? ans : 0);
    }
}

int main() {
    solve();
    return 0;
}
