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


#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 2010;
char a[MX][MX];
int n, m;

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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
