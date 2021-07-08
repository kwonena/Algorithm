// 7에 가장 가까운 수 구하기
#include <stdio.h>

int main(void)
{

    int i, j, k, l, m;
    int a[10];

    i = -1;

    printf("Please enter nine number : ");
    do {
        i++;
        scanf("%d", &a[i]); // 1자리의 양의 정수만 입력
    } while(i < 9); 
    
    j = 9;

    for(k = 0; k < 10; k++) {
        if(a[k] >= 7) l = a[k] - 7;
        else l = 7 - a[k];

        if(l <= j) {
            j = l;
            m = a[k];
        }
    }
    printf("result : %d", m);
}
