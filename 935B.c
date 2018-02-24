#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 100010

char a[M];

int main() {
    int n;
//    freopen("1.txt", "r", stdin);
//    freopen("2.txt", "w", stdout);
    while(scanf("%d", &n)!=EOF) {
        scanf("%s", a);
        int s, x, y;
        bool preIsLeftKindom = true, isLeftKindom = true;
        bool isGate = false;
        s = x = y = 0;
        for (int i = 0; a[i] != '\0'; ++i) {
            if (a[i] == 'R') {
                x += 1;
            } else {
                y += 1;
            }
            if (x != y) {
                isLeftKindom = x < y;
            }
            if (isGate) {
                if (isLeftKindom != preIsLeftKindom) {
                    ++s;
                }
                isGate = false;
            }
            if (x == y) {
                isGate = true;
            }
            preIsLeftKindom = isLeftKindom;
        }
        printf("%d\n",s);
    }
    return 0;
}
