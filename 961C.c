#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))


typedef long long ll;

#define M 210

int a[5][M][M];
int board[M][M];

int n;
int min = M*M;
int p[4]={1,2,3,4};

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}
void over(int row, int col, int t[M][M]) {
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            board[row*n+i][col*n+j] = t[i][j];
        }
    }
}

void calc(int t) {
    int tmin = 0;
    for(int i = 1; i <= 2*n; i++) {
        for (int j = 1; j <= 2*n; j++) {
            if (board[i][j] != t) {
                tmin++;
            }
            t ^= 1;
        }
        t ^= 1;
    }
    min = MIN(tmin, min);
}

void deep( int index) {
    if(index == 4) {
        over(0, 0, a[p[0]]);
        over(0, 1, a[p[1]]);
        over(1, 0, a[p[2]]);
        over(1, 1, a[p[3]]);
        calc(0); calc(1);
    } else {
        for(int j = index; j < 4; j++) {
            swap(&p[j],&p[index]);
            deep(index+1);
            swap(&p[j],&p[index]);
        }
    }
}
void solve() {
    scanf("%d%*c", &n);
    char c;
    for (int k = 1; k <= 4; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                scanf("%c", &c);
                a[k][i][j] = c - '0';
            }
            c = getchar();
        }
        if (k != 4)
            c = getchar();
    }
    return ;
};
int main() {
    solve();
    deep(0);
    printf("%d\n", min);
    return 0;
}
