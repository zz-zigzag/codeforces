#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define M 1000001

int a[M];

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int s = 0, l = n;
    for(int i = n - 1; i >= 0; --i) {
        if (i < l) {
            ++s;
        }
        l = MIN(l, i - a[i]);
    }
    printf("%d\n", s);
    return 0;
}