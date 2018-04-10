#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

typedef long long ll;

#define M 200100

char A[M];
int count[M], top;
int n, a, b, sum;

void process(int number) {
    if (number/2 <= MIN(a, b)) {
        sum += MIN(number, a+b);
        if (number & 1) {
            if (a > b) {
                a -= number/2 + 1;
                b -= number/2;
            } else  {
                b -= MIN(b, number/2 + 1);
                a -= number/2;
            }
        } else {
            a -= number/2;
            b -= number/2;
        }
    } else {
        if (a > b) {
            sum += MIN(a, (number+1)/2);
            a -= MIN(a, (number+1)/2);
            sum += b;
            b = 0;
        } else  {
            sum += MIN(b, (number+1)/2);
            b -= MIN(b, (number+1)/2);
            sum += a;
            a = 0;
        }
    }
    return;
}

void solve() {
    while(scanf("%d%d%d", &n, &a, &b)!=EOF) {
        top = sum = 0;
        scanf("%s", A);
        int i, preSit = -1, temp;
        for(i = 0; i < strlen(A); ++i) {
            if (A[i] != '.') {
                temp = i - 1 - preSit;
                if (temp) {
                    count[top++] = temp;
                }
                preSit=i;
            }
        }
        if (A[i-1] =='.') {
            temp = i - 1 - preSit;
            if (temp) {
                count[top++] = temp;
            }
        }
        for (i = 0; i < top; ++i) {
            if (a || b) {
                process(count[i]);
            }
        }
        printf("%d\n", sum);
    }
}

int main() {
    solve();
    return 0;
}
