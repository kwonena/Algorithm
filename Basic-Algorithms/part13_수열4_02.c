// 수열4. -1+2-4+7-11+...의 20번째 항까지의 합계
// 항이 바뀔 때마다 빼기와 더하기가 번갈아 나열되는 수열
#include <stdio.h>

int main(void)
{
    int i = 0, j = 1, k = -1;
    int l = -1; // 스위치 변수
        
    do {
        i++; // 증가값
        j += i;
        l *= (-1);
        k = k + j * l;
    } while(i < 19);

    printf("total : %d\n", k);
}
