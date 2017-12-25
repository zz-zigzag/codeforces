#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 110

typedef long long ll;

//char a[M];

void solve() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    if (b >= a) {
        if (n >= 2*b+4*a) {
            puts("1");
        } else if (n >= b+2*a) {
            puts("2");
        } else if (n >= a+b) {
            puts("3");
        } else {
            printf("%d\n", 2+(int)ceil(4.0/(n/a)));
        }
    } else {
        if (n >= 2*b+4*a) {
            puts("1");
        } else if (n >= b+2*a) {
            puts("2");
        } else if (n >= 2*a) {
            puts("3");
        } else if (n >= b+a){
            puts("4");
        } else {
            printf("%d\n", 4+(int)ceil(2.0/(n/b)));
        }
    }
    return ;
};
int main() {
    solve();
    return 0;
}