#include <stdio.h>
#include <string.h>
#include <math.h>

#define M 100001
#define N 26
#define MAX(a, b) (((a)>(b))?(a):(b))
#define MIN(a, b) (((a)>(b))?(b):(a))

char s[M];
int f[N], m[N];
int main() {
    scanf("%s", s);
    memset(f, -1, sizeof(f));
    for (int i = 0; s[i]; ++i) {
        for (int j = 0; j < N; ++j) {
            int temp = s[i] - 'a' == j ? 0 : 1;
            if (m[j] < i - f[j] + temp) {
                m[j] = i - f[j] + temp;
            }
        }
        f[s[i] - 'a'] = i;
    }
    int ans = strlen(s) / 2 + 1;
    for (int i = 0; i < N; ++i) {
        if (m[i] && m[i] < ans) {
            ans = m[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}