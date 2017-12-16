#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 10000001


int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", (a+5)/10*10);
    return 0;
}
