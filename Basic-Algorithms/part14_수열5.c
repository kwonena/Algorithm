// 수열4. 팩토리얼의 합
#include <stdio.h>

int main(void)
{
    int i = 1, j = 1, k = 0;
        
    do {
        i++;
        j *= i;
        k = k + j;
    } while(i < 10);

    printf("total : %d\n", k);
}
