// 예상문제은행
// 문제3
#include <stdio.h>

int main(void)
{
    float a=1, hap=1, d;
        
    do {
       d = 1 / a;
       hap += d;
       a++;
    } while(a < 10);

    printf("total : %f\n", hap); // 결과 : 3.828968
}
