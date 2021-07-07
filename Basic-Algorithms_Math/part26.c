// 5의 배수의 개수와 합
#include <stdio.h>

int main(void)
{
    int cnt, hap, mok, nmg, i;
    cnt = 0; hap = 0;

    for(i = 1; i <= 100; i++) {
        mok = (int)i / 5;
        nmg = i % 5;

        if(nmg == 0) {
            cnt++;
            hap += i;
        }
    }
    printf("cnt : %d, hap : %d", cnt, hap);
}
