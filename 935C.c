#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define EXP 1e-8
#define MOD 1e9+7
#define M 100010

char a[M];

bool isEqual(double a, double b) {
    return fabs(a-b) < EXP;
}

double distance(double dx, double dy) {
    return sqrt(dx*dx + dy*dy);
}
int main() {
//    freopen("1.txt", "r", stdin);
//    freopen("2.txt", "w", stdout);
    int R, x1, y1, x2, y2;
    while(scanf("%d%d%d%d%d", &R, &x1, &y1, &x2, &y2) != EOF) {
        double dx = x1-x2;
        double dy = y1-y2;
        double d12 = distance(dx, dy);
        if (d12 > R) {
            printf("%.8f %.8f %.8f\n", (double)x1, (double)y1, (double)R);
        } else if (x1 == x2 && y1 == y2) {
            printf("%.8f %.8f %.8f\n",x1+R/2.0, (double)y1, R/2.0);
        } else {
            double D = d12 + R;
            double X = (dx * D / d12 + 2*x2)/2;
            double Y = (dy * D / d12 + 2*y2)/2;
            printf("%.8f %.8f %.8f\n",X, Y, D/2.0);
        }
    }
    return 0;
}
