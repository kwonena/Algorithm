// 나누어 떨어지지 않을 때
#include <stdio.h>

int main(void)
{
    int a, i, j;

    printf("Please enter a number : ");
    scanf("%d", &a);

    i = a - 1;
    j = 2; // 소수이기 때문에 2부터 시작한다

    while(1) {
        if(j <= i) {
            if((a % j) == 0) {
                printf("no prime number");
                break;
            }
            else
                j++;
        } else {
            printf("prime number");
            break;
        }
            
    } 
}
