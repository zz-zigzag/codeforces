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

typedef long long LL;

void solve() {
    LL n;
    while(scanf("%I64d", &n) != EOF) {
        printf("%I64d\n", (((n+1)&0x1)==0 || n==0) ? ((n+1)>>1) : (n+1));
    }
}

int main() {
//    freopen("1.txt", "r", stdin);
//    freopen("2.txt", "w", stdout);
    solve();
    return 0;
}
