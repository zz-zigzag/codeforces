#include <stdio.h>
#define M 500

int a[M*M][2], h[M];
int main() {
    int n, i;
    long long k;
    scanf("%d%I64d", &n, &k);
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i][0]);
        a[i][1] = i;
    }
    if (k > n) {
        k = n;
    }
    int j, Top = n;
    i = 0;
    j = 1;
    while(1) {
        if(a[i][0] > a[j][0]) {
            h[a[i][1]] ++;
            a[Top][0]=a[j][0];
            a[Top++][1]=a[j++][1];
            if (h[a[i][1]] >= k) {
                break;
            }
        } else {
            a[Top][0]=a[i][0];
            a[Top++][1]=a[i++][1];
            j++;
        }
    }
    printf("%d\n", a[a[i][1]][0]);
    return 0;
}
