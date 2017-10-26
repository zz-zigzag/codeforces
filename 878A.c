#include <stdio.h>
#include <string.h>
#include <math.h>

//#define M 500001
//#define N 31
#define MAX(a, b) (((a)>(b))?(a):(b))
#define MIN(a, b) (((a)>(b))?(b):(a))


int main() {
    int n;
    int v;
    char o[2];
    int max = 0x3ff, min = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s%d", o, &v);
        if (o[0] == '|') {
            max |= v;
            min |= v;
        } else if(o[0] == '^') {
            max ^= v;
            min ^= v;
        } else {
            max &= v;
            min &= v;
        }
    }
    int a, b, c;
    a = 0x3ff, b = c =0;
    for (int i = 0; i < 10; i++) {
        int mm = max&(1<<i);
        int nn = min&(1<<i);
        if (nn && mm) {
            b |= (1<<i);
        } else if (!nn && !mm){
            a &= ~(1<<i);
        } else {
            c |= nn;
        }
    }
    puts("3");
    printf("& %d\n", a);
    printf("| %d\n", b);
    printf("^ %d\n", c);
    return 0;
}