#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <vector>
#include <set>


using namespace std;

typedef long long ll;

const ll MAX=2000000000L;
int l, r;
ll q[400];

void list() {
    set<ll> s;
    l = r = 0;
    q[r++] = 1;
    while(l < r) {
        ll t = q[l++];
        if (t*3 > MAX) {
            continue;
        }
        if (!s.count(t*2)) {
            q[r++] = t*2;
            s.insert(t*2);
        }
        if (!s.count(t*3)) {
            q[r++] = t*3;
            s.insert(t*3);
        }
    }

    return ;
};
void solve() {
    int a, b, sum = 0;
    scanf("%d%d", &a, &b);
    for(int i = 0; i < r; ++i) {
        if (q[i] <= b && q[i] >= a) {
            ++sum;
        }
    }
    printf("%d\n", sum);
};

int main() {
    list();
    solve();
    return 0;
}