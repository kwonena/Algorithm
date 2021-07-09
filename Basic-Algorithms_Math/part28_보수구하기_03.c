// 보수의 보수 구하기
#include <stdio.h>

int main(void)
{
    int b, c, d, e, mok, nmg, a[100];

    printf("Please enter a number : ");
    scanf("%d", &b);

    c = -1;

    while(1) {
        d = 2;
        e = (int)sqrt(b);

        while(1) {
            if(d > e) {
                d = b;
                break;
            }
            mok = b / d;
            nmg = b % d;

            if(nmg == 0) break;
            else d++;
        }
        c++;
        a[c] = d;
        
        if(b==d) break;
        b = mok;
    }
    printf("result : ");
    for(int i = 0; i <= c; i++) printf("%d ", a[i]);
}
