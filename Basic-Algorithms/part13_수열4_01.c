// 수열4. 1+2+4+7+11+...로 증가하는 수열
// 항 사이에 증가하는 값이 일정한 비율로 증가하는 수열
#include <stdio.h>

int main(void)
{
    int i = 0, j = 1, k = 1;
        
    do {
        i++; // 증가값
        j += i;
        k += j;
    } while(i < 19);

    printf("total : %d\n", k);
}
