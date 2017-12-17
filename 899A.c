#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 5001

typedef long long ll;



int main() {
    int t, n, n1, n2;
    n1 = n2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &t);
        if (t == 2) {
            n2 ++;
        } else {
            n1 ++;
        }
    }
    int s = 0;
    if (n1 > n2) {
        s = n2 + (n1 - n2) / 3;
    } else {
        s = n1;
    }
    printf("%d\n", s);
    return 0;
}