#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define M 101

char a[M];
int l[M];

int main() {
    scanf("%s", a);
    int s = 0;
    for(int i = 0; a[i] != '\0'; i++) {
        if(a[i] == 'Q') {
            ++s;
        } else if (a[i] == 'A') {
            l[i] = s;
        }
    }
    int ans = 0;
    for(int i = 0; a[i] != '\0'; i++) {
        if (a[i] == 'A') {
            ans += l[i] * (s - l[i]);
        }
    }
    printf("%d\n", ans);
    return 0;
}