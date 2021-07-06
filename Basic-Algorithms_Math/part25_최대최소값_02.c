// 최대값, 최소값을 제외한 평점의 평균 구하기
#include <stdio.h>

int main(void)
{
    int m, min, max, hap, avg, i;
    int a[7];

    m = -1;
    
    printf("Please enter seven number : ");
    do {
        m++;
        scanf("%d", &a[m]);
    } while(m < 6); // 개수가 7개가 되어야 함

    min = a[0];
    max = a[0];
    hap = a[0];
    i = 0;

    while(1) {
        if(i < 6) {
            i++;
            hap += a[i];
            if(a[i] < min) min = a[i];
            if(a[i] > max) max = a[i];
        } else {
            hap = hap - min - max;
            avg = (int)hap / 5;
            printf("min :%d, max : %d, hap : %d, avg : %d", min, max, hap, avg);
            break;
        }
    }
}
