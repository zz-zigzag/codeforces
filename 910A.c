#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 110

typedef long long ll;

char a[M];

void solve() {
    int n, d;
    scanf("%d%d%s", &n, &d, a);
    int ans, l, r;
    ans = l = r = 0;
    for (int i = 0; i < n-1; ) {
        for(int j = 1; j <= d; ++j) {
            if (a[j+i] == '1') {
                r = MAX(r, j+i);
            }
        }
        if (l == r) {
            puts("-1");
            return ;
        }
        l = i = r;
        ++ans;
    }
    printf("%d\n", ans);
    return ;
};
int main() {
    solve();
    return 0;
}