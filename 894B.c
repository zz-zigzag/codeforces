#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7

typedef long long ll;

ll mod(ll a, ll b, ll m) {
    a%=m;
    return !b?1:(((b&1)?a:1)*mod(a*a,b>>1,m)%m)%m;;
}

int main() {
    ll n, m, k;
    scanf("%I64d%I64d%I64d", &n, &m, &k);
    if (k == -1 && ((n + m) & 1)) {
        puts("0");
    } else {
        printf("%I64d\n", mod(mod(2, n - 1, MOD), m - 1, MOD));
    }

    return 0;
}