#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 25


int main() {
    int n, t;
    scanf("%d", &n);
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &c[i]);
//    }
    t = n % 4;
    puts((t == 0 || t == 3) ? "0" : "1");
    printf("%d ", n%4==1 ? n/2+1:n/2);
    if (n % 2 == 0) {
        for(int i = 0; i * 4 < n; ++i) {
            printf("%d ", i * 4 + 1);
            if (i * 4 + 4 <= n) {
                printf("%d ", i * 4 + 4);
            }
        }
    } else {
        for(int i = n; i > 0; i -= 4) {
            printf("%d ", i);
            if (i - 3 > 0) {
                printf("%d ", i - 3);
            }
        }
    }
    puts("");
    return 0;
}