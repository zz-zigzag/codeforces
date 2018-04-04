#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))


typedef long long ll;

#define M 1010

int a[M];

void solve() {
    int n, m, temp;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &temp);
        a[temp]++;
    }
    int min = a[1];
    for (int i = 2; i <= n; ++i) {
        min = MIN(min, a[i]);
    }
    printf("%d\n", min);
    return ;
};
int main() {
    solve();
    return 0;
}