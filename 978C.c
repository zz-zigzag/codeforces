#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define EXP 1e-8
#define MOD 1e9+7
#define M 1010
#define N 200010

long long a[N], s[N];
int n, m;

int b_search(long long query) {
    int l = 1, r  = n, m;
    while(l < r) {
        m = (l + r) / 2;
        if (s[m] == query) {
            l = m;
            break;
        } else if (s[m] < query) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return s[l] > query ? l - 1 : l;
}

int main() {
    long long sum, query, f, k;
    while(scanf("%d%d", &n, &m) != EOF) {
        sum = 0;
        for (int i = 1; i <= n; ++i) {
            scanf("%I64d", &a[i]);
            sum += a[i];
            s[i] = sum;
        }
        for (int i = 1; i <= m; ++i) {
            scanf("%I64d", &query);
            f = b_search(query);
            if(s[f] == query) f--;
            printf("%I64d %I64d\n", f+1, query - s[f]);
        }
    }
    return 0;
}
