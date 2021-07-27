// 달팽이 만들기
// 행고정 열변환, 열고정 행변환 연속으로 일어남
// 두번의 반복문이 필요
#include <stdio.h>

int main(void)
{
    int k, c, i, j, f, n;
    int a[5][5];

    k = 0;
    c = 1;
    i = 0;
    j = -1;
    f = 5;

    do {
        for(n = 1; n <= f; n++) {
            k++;
            j += c;
            a[i][j] = k;
        }

        f -= 1;

        for(n = 1; n <= f; n++) {
            k++;
            i += c;
            a[i][j] = k;
        }

        c *= (-1);

    } while(f > 0);
    
    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++) {
            printf("%3d", a[x][y]);
        }
        printf("\n");
    }

   
}
