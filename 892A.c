#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

//#define M 100001

int main() {
    int n, m;
    long long s;
    int m1, m2;
    scanf("%d", &n);
    s = m1 = m2 = 0;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &m);
        s += m;
    }
    for(int i = 0; i < n; ++i) {
        scanf("%d", &m);
        if (m >= m1) {
            m2 = m1;
            m1 = m;
        } else if (m > m2) {
            m2 = m;
        }
    }
    puts(s <= m1 + m2 ? "YES" : "NO");
    return 0;
}