// 수열1. 1~100까지의 합
#include <stdio.h>

int main(void)
{
    int i = 0, sum = 0;
    
    do {
        i++;
        sum += i;
    } while(i < 100);

    printf("total : %d\n", sum);
}
