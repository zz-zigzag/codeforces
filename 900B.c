#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 100010

typedef long long ll;

bool been[M];

void solve() {
    int a, b, want;
    scanf("%d%d%d", &a, &b, &want);
    memset(been, 0, sizeof(been));
    for (int i = 1; i <= M; ++i) {
        if(been[a]) {
            puts("-1");
            return;
        } else {
            been[a] = true;
        }
        int cur = a*10/b;
        if (cur == want) {
            printf("%d\n", i);
            return;
        }
        a = a*10%b;
    }
};
int main() {
    solve();
    return 0;
}
