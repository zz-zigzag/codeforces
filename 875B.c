#include <stdio.h>

#define MAX 300010

char flag[MAX];
int main() {
    int n;
    scanf("%d", &n);
    printf("1");
    for (int i = 0, rst = 1, tmp, last = n; i < n; ++i) {
        scanf("%d", &tmp);
        flag[tmp] = 1;
        ++rst;
        while(flag[last]) {
            --last;
            --rst;
        }
        printf(" %d", rst);
    }
    return 0;
}
