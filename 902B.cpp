#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <vector>

#define MIN(a, b) ((a)<(b)?(a):(b))
#define MAX(a, b) ((a)>(b)?(a):(b))

#define MOD 1e9+7
#define M 10010

using namespace std;

typedef long long ll;

vector <vector<int> > map(M);
int eColor[M];
int nColor[M];

void solve() {
    int n, t, ans;
    scanf("%d", &n);
    ans = 0;
    for (int i = 2; i <= n; ++i) {
        scanf("%d", &t);
        map[t].push_back(i);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &eColor[i]);
    }
    for (int i = 1; i <= n; ++i) {
        if (nColor[i] != eColor[i]) {
            ++ans;
        }
        for(int j = 0; j < map[i].size(); ++j) {
            nColor[map[i][j]] = eColor[i];
        }
    }
    printf("%d\n", ans);
    return ;
};
int main() {
    solve();
    return 0;
}