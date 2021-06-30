// 나누어 떨어질 때
#include <stdio.h>

int main(void)
{
    int a, j;

    printf("Please enter a number : ");
    scanf("%d", &a);

    j = 2;

    while(a % j != 0) j++; // j는 2부터 a까지 증가할 수 있음
    
    if(a == j) printf("prime number");
    else printf("no prime number");
}
