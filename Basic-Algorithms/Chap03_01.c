// 예상문제은행
// 문제1
#include <stdio.h>

int main(void)
{
    int q, m, p = 0, h = 0;
        
    do {
       p++;
       q = 78 - p;
       m = q * p;
       h += m;
    } while(p < 77);

    printf("total : %d\n", h); // 결과 : 79079
}
