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
#define N 100010

typedef long long LL;

char a[N];
int cnt[52], n;

int ch(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a';
    } else {
        return c - 'A' + 26;
    }
}

int getAns() {
    scanf("%s", a);
    memset(cnt, 0, sizeof(cnt));
    int L = strlen(a), i;
    for (i = 0; i < L; ++i) {
        cnt[ch(a[i])]++;
    }
    int mx = 0;
    for (i = 0; i < 52; ++i) {
        mx = MAX(mx, cnt[i]);
    }
    if (mx == L) {
        if (n == 1) {
            return mx - 1;
        } else {
            return mx;
        }
    }
    return MIN(L, mx + n);
}

void solve() {
    scanf("%d", &n);
    int v[3], i;
    v[0] = getAns();
    v[1] = getAns();
    v[2] = getAns();
    int mx = MAX(MAX(v[0], v[1]), v[2]);
    int sum = 0;
    for (i = 0; i < 3; ++i) {
        if (v[i] == mx) sum++;
    }
    if (sum >= 2) {
        puts("Draw");
        return ;
    }
    if (v[0] == mx) puts("Kuro");
    if (v[1] == mx) puts("Shiro");
    if (v[2] == mx) puts("Katie");
    return ;
}

int main() {
    solve();
    return 0;
}
