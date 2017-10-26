#include <stdio.h>
#include <math.h>

#define M 1001

int main() {
    int n, s, d, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &s, &d);
        if (ans < s) {
            ans = s;
        } else {
            ans = ceil((ans + 1 - s) * 1.0 / d) * d + s;
        }
    }
    printf("%d\n", ans);
    return 0;
}