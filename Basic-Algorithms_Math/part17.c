// 소수의 합 구하기
#include <stdio.h>

int main(void)
{
    int a, j, k, hap;

    printf("Please enter a number : ");
    scanf("%d", &a);

    k = 2;
    hap = 0;

    while(1) {
        j = 2;
        while(k % j != 0) j++;
        if(k == j) hap += k;
        if(k < a) k++;
        else {
            printf("%d", hap);
        break;
        }
    } 
}