#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 25

int a[5]= {0,0,1,3,6};

int main() {
    int n;
//    freopen("1.txt", "r", stdin);
//    freopen("2.txt", "w", stdout);
    while(scanf("%d", &n)!=EOF) {
        if (n < 5) {
            printf("%d\n",a[n]);
            continue;
        }
        long long s = 0LL, t=5LL,i;
        for(i = 1; i <10; i++) {
            if (n >=t) {
                t*=10;
            } else  {
                break;
            }
        }
        t/=10;
        for(i=1; i<=5; i++) {
            if(n>t*i*2+t-1) {
                s+=2*t*i;
                s--;
            } else {
                i--;
                break;
            }
        }
        s+=(n-t*i*2-t+1)*(i+1);
        if(n>=t+t-1+i*(t*10/5)) {
            s--;
        }
        printf("%d\n",s);
    }
    return 0;
}
