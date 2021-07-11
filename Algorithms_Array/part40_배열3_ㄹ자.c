// 'ㄹ'자로 채우기
#include <stdio.h>

int main(void)
{
    int k, l, m, n, i, j, p;
    int a[5][5] = { 0 };

    k = 0;
    l = 0;
    m = 4;
    n = 1;

    for(i = 0; i <= 4; i++) {
        for(j = l; j != m + n; j += n) {
            k++;
            a[i][j] = k;
        }
        p = l;
        l = m;
        m = p;
        n *= (-1);
    }

    for(int x = 0; x <= 4; x++) {
        for(int y = 0; y <= 4; y++) {
            printf("%3d", a[x][y]);
        }
        printf("\n");
    }

}
