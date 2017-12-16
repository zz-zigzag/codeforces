#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 5001

typedef enum {false=0, true=1} bool;
typedef long long ll;

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", a/10*10);
    return 0;
}
