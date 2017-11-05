#include <stdio.h>
#include <string.h>

typedef enum {false=0, true=1} bool;

#define M 101

int main() {
    char a[M];
    scanf("%s", a);
    int sum = 0;
    bool f = false;
    for(int i = 0; i < strlen(a); ++i) {
        if (!f && a[i] == '1') {
            f = true;
        }
        if (f && a[i] == '0') {
            ++sum;
        }
    }
    puts(sum >= 6 ? "yes" : "no");
    return 0;
}
