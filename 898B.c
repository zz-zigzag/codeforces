#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 10000001

typedef enum {false=0, true=1} bool;
typedef long long ll;

char f[M];
int ca[M], cb[M];
int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    f[0] = 1;
    for (int i = a; i <= n; i += a) {
        f[i] = f[i - a];
        ca[i] = ca[i - a]+1;
    }
    for (int i = b; i <= n; i++) {
        if (f[i - b] && !f[i]) {
            f[i] = 1;
            cb[i] = cb[i - b]+1;
            ca[i] = ca[i - b];
        }
    }
    if (f[n]) {
        printf("YES\n%d %d\n", ca[n], cb[n]);
    } else {
        puts("NO");
    }
    return 0;
}
