#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 25

int main() {
    int n;
//    freopen("1.txt", "r", stdin);
//    freopen("2.txt", "w", stdout);
    while(scanf("%d", &n)!=EOF) {
        int s = 0, i;
        for (i = 2; i * i < n; ++i) {
            if (n % i == 0) {
                ++s;
            }
        }
        s *= 2;
        if (i * i == n) {
            s++;
        }
        printf("%d\n",s+1);
    }
    return 0;
}
