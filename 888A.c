#include <stdio.h>
#include <string.h>
#include <math.h>

#define M 1001
//#define N 26
#define MAX(a, b) (((a)>(b))?(a):(b))
#define MIN(a, b) (((a)>(b))?(b):(a))

int a[M];
int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n - 1; ++i) {
        if ((a[i] < a[i - 1] && a[i] < a[i + 1]) || (a[i] > a[i - 1] && a[i] > a[i + 1])) {
            ++ans;
        }
    }
    printf("%d\n", ans);
    return 0;
}