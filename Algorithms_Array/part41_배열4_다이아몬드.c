// 다이아몬드
// 가운데 행을 기준으로 위, 아래를 다른 변수로 따로 계산한다
#include <stdio.h>

int main(void)
{
    int i, j, k, s, e;
    int a[5][5] = {0};

    k = 0, s = 2, e = 2;

    for(i = 0; i < 5; i++) {
        for(j = s; j <= e; j++) {
            k++;
            a[i][j] = k;
        }

        if(i >= 2) {
            s++;
            e--;
        } else {
            s--;
            e++;
        }
    }
    for(int x = 0; x <= 4; x++) {
        for(int y = 0; y <= 4; y++) {
            printf("%3d", a[x][y]);
        }
        printf("\n");
    }
}
