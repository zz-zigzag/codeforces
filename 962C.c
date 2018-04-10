#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

typedef long long ll;

#define M 1e9*2


int n;
char a[15], N[15];

bool process() {
    int i, j;
    i = j = 0;
    while(a[i] && N[j]) {
        if (a[i] == N[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }
    return a[i] == 0;
}
void solve() {
    scanf("%d", &n);
    itoa(n, N, 10);
    for(int i = sqrt(n); i>=1; i--) {
        itoa(i*i, a, 10);
        if (process()) {
            printf("%d\n", strlen(N)- strlen(a));
            return;
        }
    }
    printf("-1\n");
    return;
}

int main() {
    solve();
    return 0;
}