#include <stdio.h>
#include <string.h>

#define MAX 100001


int hash[MAX], a[MAX];
int main() {
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        ++hash[a[i]%m];
    }
    int ans = -1;
    for (int i = 0; i < MAX; ++i) {
        if (hash[i] >= k) {
            ans = i;
        }
    }
    puts(ans == -1 ? "No" : "Yes");
    for (int flag = 0, j = 0, i = 0; i < n; ++i) {
        if (a[i] % m == ans && j < k) {
            if (!flag) {
                printf("%d", a[i]);
                flag = 1;
            } else {
                printf(" %d", a[i]);
            }
            ++j;
        }
    }
    return 0;
}
