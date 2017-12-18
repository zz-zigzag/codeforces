#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 60

typedef long long ll;


int main() {
    int n, x, left, right;
    left = right = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%*d", &x);
        if (x > 0) {
            right++;
        } else {
            left++;
        }
    }
    printf("%s\n", left <=1 || right <= 1 ? "Yes" : "No");
    return 0;
}
