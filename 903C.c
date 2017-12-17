#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 5001

typedef enum {false=0, true=1} bool;
typedef long long ll;

int cmp(const void *a, const void *b) {
    return (ll)(*(ll *)a - *(ll *)b);
}

int a[M];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    int ans = 1, max = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == a[i + 1]) {
            ++ans;
        } else {
            max = MAX(max, ans);
            ans = 1;
        }
    }
    max = MAX(max, ans);
    printf("%d\n", max);
    return 0;
}
