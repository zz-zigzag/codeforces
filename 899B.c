#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 60

typedef long long ll;


int a[M] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};

int c[M];

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &c[i]);
    }
    for (j = 0; j < M - n; j++) {
        for (i = 0; i < n; ++i) {
            if (a[j + i] != c[i]) {
                break;
            }
        }
        if (i == n) {
            break;
        }
    }
    printf("%s\n", j == M - n ? "NO" : "YES");
    return 0;
}