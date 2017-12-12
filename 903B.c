#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define EXP 1e-7
#define M 101

typedef enum {false=0, true=1} bool;
typedef long long ll;

int main() {
    int h1, a1, c, h2, a2;
    int nc, na, remain;
    scanf("%d%d%d%d%d", &h1, &a1, &c, &h2, &a2);
    na = (int)ceil(h2 * 1.0 / a1);
    remain = (na - 1)*a2 - h1;
    if (remain >= 0) {
        nc = (int)ceil(remain*1.0/(c-a2) + EXP);
    }

    printf("%d\n", na + nc);
    for (int i = 0; i < nc; ++i) {
        puts("HEAL");
    }
    for (int i = 0; i < na; ++i) {
        puts("STRIKE");
    }
    return 0;
}
