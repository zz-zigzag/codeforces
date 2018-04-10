#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

typedef long long ll;

#define M 200100

int a[M];
int n;


void solve() {
    scanf("%d", &n);
    int i, sum = 0;
    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    int tsum = 0;
    for(i = 0; i < n; ++i) {
        tsum += a[i];
        if (tsum*2 >= sum) {
            break;
            return ;
        }
    }
    printf("%d\n", i+1);

}

int main()
{
    solve();
    return 0;
}