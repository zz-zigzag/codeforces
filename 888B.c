#include <stdio.h>
#include <string.h>
#include <math.h>

#define M 101
//#define N 26
#define MAX(a, b) (((a)>(b))?(a):(b))
#define MIN(a, b) (((a)>(b))?(b):(a))

int a[4];
int main() {
    int n;
    char s[M];
    scanf("%d%s", &n, s);
    for (int i = 0; i < n; ++i) {
        switch(s[i]) {
            case 'L' : a[0]++; break;
            case 'R' : a[1]++; break;
            case 'U' : a[2]++; break;
            case 'D' : a[3]++; break;
        }
    }
    printf("%d\n", (MIN(a[0], a[1]) + MIN(a[2], a[3])) *2);
    return 0;
}