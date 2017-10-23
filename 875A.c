#include <stdio.h>

#define MAX 9*9

int sum(int n) {
    int s = 0;
    while(n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main() {
    int n, rst[MAX], top = 0;
    scanf("%d", &n);
    for(int i = 0; i <= MAX && n - i > 0; i++) {
        if (n - i + sum(n - i) == n) {
            rst[top++] = n - i;
        }
    }
    printf("%d\n", top);
    for(int i = top - 1; i >= 0; --i) {
        printf("%d\n", rst[i]);
    }
    return 0;
}
