#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;
const long long inf = 1e18;
const int maxn = 100010;

int a[maxn];
bool v[maxn];

void solve() {
    int n, k, l;
    scanf("%d%d%d", &n, &k, &l);
    int len = n*k;
    long long ans = 0;
    for(int i = 0; i < len; ++i)
        scanf("%d", &a[i]);
    sort(a, a+len);
    int cnt = 0;
    for (int i = 0; i < len && a[i] - a[0] <= l; i += k)
        cnt++, v[i] = true, ans += a[i];
    for (int i = len - 1; i && cnt < n; --i)
        if (a[i] - a[0] <= l && !v[i])
            cnt++, v[i] = true, ans += a[i];
    printf("%I64d\n", cnt == n ? ans : 0ll);
    return ;
}
int main() {
    solve();
    return 0;
}


/*
int solve() {
    scanf("%d%d%d", &n, &k, &l);
    int len = n*k;
    int right, i;
    ll sum = 0;
    for(i = 0; i < n*k; i++)
        scanf("%I64d", &a[i]);
    sort(a, a+len);
    if (a[n-1] - a[0] > l) {
        return puts("0");
    }
    for (i = 1; i < n*k; ++i) {
        if (a[i] - a[0] > l) break;
    }
    right = i;
    if(right != n*k) {
        for (i = right; i+k-2 < n*k; i+=(k-1)) {
            sum += a[--right];
        }
        if (i != n*k) {
            right -= k-(n*k-i);
            sum += a[right];
        }
    }
    for (i = right-k; i >= 0; i-=k)
        sum+=a[i];
    return printf("%I64d\n", sum);
}
*/
int main() {
    solve();
    return 0;
}
