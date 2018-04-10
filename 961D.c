#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

typedef long long ll;

#define M 100010

long long a[M][2];
int n;

bool flag[M];

bool check(int a1, int a2, int target) {
    return (a[target][1]-a[a2][1])*(a[a1][0]-a[a2][0])==(a[target][0]-a[a2][0])*(a[a1][1]-a[a2][1]);
}
int line(int a1, int a2) {
    memset(flag, 0, sizeof(flag));
    flag[a1] = flag[a2] = true;
    int p1 = -1, p2 = -1;
    for(int i = 0; i < n; ++i) {
        if (!flag[i]) {
            if (check(a1, a2, i)) {
                flag[i] = true;
            } else {
                if (p1 != -1) {
                    if (p2 == -1) {
                        p2 = i;
                    }
                } else {
                    p1 = i;
                }
            }
        }
    }
    flag[p1] = flag[p2] = true;
    for(int i = 0; i < n; ++i) {
        if (!flag[i]) {
            if (!check(p1, p2, i)) {
                return false;
            }
        }
    }
    return true;
}

void solve() {
    scanf("%d", &n);
    if (n <=4 ) {
        printf("YES\n");
        return;
    }
    for(int i = 0; i < n; ++i) {
        scanf("%I64d%I64d", &a[i][0], &a[i][1]);
    }
    if (line(0,1)||line(0,2)||line(1,2)) {
        puts("YES");
    } else {
        puts("NO");
    }

}
int main() {
    solve();
    return 0;
}
