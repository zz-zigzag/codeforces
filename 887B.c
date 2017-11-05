#include <stdio.h>
#include <string.h>

#define M 1000
#define N 6

#define MAX(a, b) (((a)>(b))?(a):(b))
#define MIN(a, b) (((a)>(b))?(b):(a))

typedef enum {false=0, true=1} bool;

bool f[M];

void one(int a){
    f[a] = true;
}
void two(int a, int b) {
    f[a*10 + b] = true;
}
void twos(int a, int b) {
    two(a, b);
    two(b, a);
}
void three(int a, int b, int c) {
    f[a*100 + b*10 + c] = true;
}
void threes(int a, int b, int c) {
    three(a, b, c);
    three(a, c, b);
    three(b, a, c);
    three(b, c, a);
    three(c, a, b);
    three(c, b, a);
}
int main() {
    int n;
    int a[3][N];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < N; ++i) {
        one(a[0][i]);
        if (n > 1) {
            for (int j = 0; j < N; ++j) {
                one(a[1][j]);
                twos(a[0][i], a[1][j]);
                if (n > 2) {
                    for (int k = 0; k < N; ++k) {
                        one(a[2][k]);
                        twos(a[0][i], a[2][k]);
                        twos(a[1][j], a[2][k]);
                        threes(a[0][i], a[1][j], a[2][k]);
                    }
                }
            }
        }
    }
    int i;
    for (i = 1; i < M; ++i) {
        if (!f[i])
            break;
    }
    printf("%d\n", i - 1);
    return 0;
}
