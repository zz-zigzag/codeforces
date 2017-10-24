#include <stdio.h>

#define MIN(a, b) ((a)<(b)?(a):(b))

int main()
{
    int n, a, b, c;
    scanf("%d%d%d%d", &n, &a, &b, &c);
    printf("%d\n", n > 1 ? MIN(a, b) + (n - 2) * MIN(a, MIN(b, c)) : 0);
    return 0;
}
