#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define EXP 1e-8
#define MOD 1e9+7
#define M 1010
#define N 110

char a[N];

void move(char *str) {
    for(int i = 0; str[i] != '\0'; ++i) {
        str[i] = str[i+1];
    }
}

int main() {
//    freopen("1.txt", "r", stdin);
//    freopen("2.txt", "w", stdout);
    int n, sum;
    char *p;
    while(scanf("%d", &n) != EOF) {
        scanf("%s", a);
        sum = 0;
        p = strstr(a, "xxx");
        while(p) {
            sum++;
            move(p);
            p = strstr(a, "xxx");
        }
        printf("%d\n", sum);

    }
    return 0;
}
