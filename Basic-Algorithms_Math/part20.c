// 약수 구하기
#include <stdio.h>

int main(void)
{
    int b, i, mok, nmg;
    int a[100];

    printf("Please enter a number : ");
    scanf("%d", &b);

    int c = 0, d = -1; // d가 0부터 시작해야 하기 때문에 -1로 초기화

    while(1) {
        c++;
        if(c <= b) {
           mok = (int)b/c;
           nmg = b - mok*c;
           if(nmg == 0) {
               d++;
               a[d] = c; // a[d==0]부터 시작해야 함
           }
        } else {
            printf("output number : %d\n", b);
            printf("output number : ");
            for(i = 0; i <= d; i++)
                printf("%d ", a[i]); 
            break;
        }
    } 
}
