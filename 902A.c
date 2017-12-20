#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 100010

typedef long long ll;

void solve() {
    int n, m, a, b, right;
    scanf("%d%d", &n, &m);
    right = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a, &b);
        if (right < a) {
            puts("NO");
            return ;
        } else if (m <= b) {
            puts("YES");
            return ;
        }
        right = MAX(right, b);
    }
    puts("NO");
    return ;
};
int main() {
    solve();
    return 0;
}