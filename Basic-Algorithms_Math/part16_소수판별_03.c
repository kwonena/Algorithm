// 제곱근 이용하기
#include <stdio.h>

int main(void)
{
    int a, j;

    printf("Please enter a number : ");
    scanf("%d", &a);

    j = 2;

    while(1) {
        if(j <= sqrt(a)) {
            if(a % j == 0) {
            printf("no prime number"); // a가 짝수일때 바로 소수아님으로 출력됨
            break;
            } else j++;
        } else {
            printf("prime number");
            break; 
        }
    }
}