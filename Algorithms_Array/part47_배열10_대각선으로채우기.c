// 대각선으로 채우기
// 각각의 회전에 해당하는 행과 열을 더하면 같은 값이 나옴
// 행고정 열변환or행변환 열고정 둘다 아님
// 행과 열을 지정해주는 변수 외에도 회전수를 정해주는 변수가 필요하다
#include <stdio.h>

int main(void)
{
    int i, j, k, l;
    int a[5][5];

    l = 0;

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 5; j++) {
            k = i - j;
            if(k < 0) continue;
            if(k > 4) continue;

            l++;
            a[j][k] = l;
        }
    }
    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++) {
            printf("%3d", a[x][y]);
        }
        printf("\n");
    }
}
