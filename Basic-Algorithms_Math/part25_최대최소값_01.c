// 최대값 구하기
#include <stdio.h>

int main(void)
{
    int i, j, max;
    int a[10];

    j = -1, max = 0;

    printf("Please enter ten number : ");

    while(j < 9) {
        j++;
        scanf("%d", &a[j]);
    }

    for(i = 0; i < 10; i++) {
        if(a[i] > max) max = a[i];
    }
    printf("result :%d", max);
}
