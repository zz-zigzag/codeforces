#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define M 2001

int GCD(int a,int b) {
    return b > 0 ? GCD(b,a%b) : a;
}
int a[M];

int main() {
    int n, i, j, c;
    scanf("%d", &n);
    for(c = i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] == 1) {
            c++;
        }
    }
    for(i = 1; i < n; ++i) {
        for(j = 0; j < n - i; j++) {
            int temp = GCD(a[j], a[j+1]);
            if (temp == 1) {
                break;
            }
            a[j] =  temp;
        }
        if (j < n - i) {
            break;
        }
    }
    if (n == 1) {
        puts(c==1?"0":"-1");
    } else {
        printf("%d\n", i==n?-1:i+n-1-c);
    }
    return 0;
}