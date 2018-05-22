#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;



#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

const int mod = 1000000007;
const ll inf = 1e18;
const int maxn = 2010;
char a[maxn][maxn];
int n, m;
/*
bool isIgnoreOk(int lamp, int ignore) {
    F0R(j, n) {
        if (j == ignore) continue;
        if (a[j][lamp] == '1')
            return true;
    }
    return false;
}

void solve() {
    cin>>n>>m;
    F0R(i, n) {
        cin>>a[i];
    }
    F0R(i, n) {
        bool ok = true;
        F0R(j, m) {
            if (a[i][j] == '1') {
                if(!isIgnoreOk(j, i)) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            puts("YES");
            return ;
        }
    }
    puts("NO");
}

*/

bool flag[maxn];

int solve() {
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        scanf("%s", a[i]);
    for (int i = 0; i < m; ++i) {
        int cnt = 0, t;
        for (int j = 0; j < n; ++j)
            if (a[j][i] == '1') cnt++, t = j;
        if (cnt == 1) flag[t] = true;
    }
    for (int i = 0; i < n; ++i)
        if (!flag[i])
            return puts("YES");
    return puts("NO");
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
