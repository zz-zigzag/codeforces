#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define M 100010
#define MM 2000000000L
typedef long long ll;

ll a[M];

int cmp(const void *a, const void *b) {
    return *((int *)a) - *((int *)b);
}

ll GCD(ll a,ll b) {
    return b > 0 ? GCD(b, a % b) : a;
}
void solve() {
    ll smallDis = MM, maxDis = 0;
    ll list[M];
    int p = 0;

    int i, n;
    scanf("%d", &n);
    for(i = 0; i < n; ++i) {
        scanf("%I64d", &a[i]);
    }
    qsort(a, n, sizeof(ll), cmp);
    for(i = 1; i < n; ++i) {
        ll t = a[i] - a[i-1];
        list[p++] = t;
        smallDis = MIN(smallDis, t);
        maxDis = MAX(maxDis, t);
    }
    qsort(list, p, sizeof(ll), cmp);

    ll dis = list[0];
    for(i = 1; i < p; ++i) {
        dis = GCD(dis, list[i]);
    }
    if (smallDis == maxDis) {
        puts("0");
        return ;
    }
    int sum = 0;
    for(i = 0; i < p; ++i) {
        if (dis != list[i]) {
            sum += list[i]/dis - 1;
        }
    }
    printf("%d\n", sum);
    return ;
};
int main() {
    solve();
    return 0;
}