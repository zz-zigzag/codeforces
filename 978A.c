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
#define N 51

int a[N];
bool dup[M];

int main() {
//    freopen("1.txt", "r", stdin);
//    freopen("2.txt", "w", stdout);
    int n;
    while(scanf("%d", &n) != EOF) {
        for(int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        memset(dup, 0, sizeof(dup));
        int sum = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (dup[a[i]]) {
                a[i] = -1;
                sum++;
            } else {
                dup[a[i]] = true;
            }
        }
        printf("%d\n", n - sum);
        for(int i = 0; i < n; ++i) {
            if (a[i] != -1) {
                printf("%d ", a[i]);
            }
        }

    }
    return 0;
}
