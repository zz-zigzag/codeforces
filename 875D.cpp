/*
	在手工解题的过程中，发现有大量重复计算，得想一个办法利用起来，DP的思想。
	共有C(n, 2)种组合，找不符合条件的情况相对清楚些。
	针对当前位置i，往左找到位置j，or后可以变大的，即i的二进制31位（正数）中某位为0，但j处此位不为0，此处可以31位循环，找到靠近i的值，记录在l[i]中，
		期间可使用辅助数组lpos[31]，记录该位为1的最右端的下标。
		从左到右可一次遍历可完成l数组
		同理从右往左完成r[]
	在运行第二个测试
		4
		3 3 3 3
	结果为-10，说明每个无效的组合都减了两次，所以在求l[]时把这种情况去掉，使用了stl的map，换了C++
		即不要把之前相同值算上了，因为r[]中会再算一次。
	无效组合的数量为
		左边组合 (i - l[i] - 1) 
		右边组合 (r[i] - i - 1)
		跨i的组合，(i - l[i] - 1ll) * (r[i] - i - 1);
	注意使用某些计算使用long long防止溢出。
	
*/


#include <cstdio>
#include <map>

using namespace std;

#define M 200001
#define N 31
#define MAX(a, b) (((a)>(b))?(a):(b))
#define MIN(a, b) (((a)>(b))?(b):(a))

int a[M], l[M], r[M], lpos[N], rpos[N];
map <int, int> m;
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 31; ++i) {
        lpos[i] = -1;
        rpos[i] = n;
    }
    for(i = 0; i < n; ++i) {
        l[i] = m.count(a[i]) > 0 ? m[a[i]] : -1;
        for(j = 0; j < 31; ++j) {
            if(!(a[i] & (1<<j))) {
                l[i] = MAX(l[i], lpos[j]);
            }
        }

        for(j = 0; j < 31; ++j) {
            if(a[i] & (1<<j)) {
                lpos[j] = i;
            }
        }
        m[a[i]] = i;
    }
    for(i = n - 1; i >= 0; --i) {
        r[i] = n;
        for(j = 0; j < 31; ++j) {
            if(!(a[i] & (1<<j))) {
                r[i] = MIN(r[i], rpos[j]);
            }
        }

        for(j = 0; j < 31; ++j) {
            if(a[i] & (1<<j)) {
                rpos[j] = i;
            }
        }
    }
    long long sum = 1ll * n * (n - 1) / 2;
    for(i = 0; i < n; ++i) {
        sum -= (i - l[i] - 1) + (r[i] - i - 1) + (i - l[i] - 1ll) * (r[i] - i - 1);
    }
    printf("%I64d\n", sum);
    return 0;
}
