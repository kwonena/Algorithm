// 예상문제은행
// 문제2. 양수의 합과 음수의 합
#include <stdio.h>

int main(void)
{
    int even, odd, k, g, s, j;
    even = 0, odd = 0, k = 0, g = 0;
    s = -1, j = 1;
        
    do {
        k = (int)(j/2) * 2;
        s *= -1;
        g = j * s;

        if(k == j) even += g;
        else odd += g;
        j++;
    } while(j <= 100);

    printf("even-total : %d, odd-total : %d\n", even, odd); // 결과 : -2550, 2500
}
