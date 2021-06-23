// 수열2. (-1)x2x(-3)x4x...x100의 합
// 홀짝 판별을 이용한 반복 계산
#include <stdio.h>

int main(void)
{
    int i = 0;
    double j = 1; // j를 0으로 선언하면 곱했을 때 0이 됨 
    
    do {
        i++;
        
        if((i % 2) == 0) { // 짝수 
            j *= i;
        } else { 
            j *= (-i);
        }
    } while(i < 100);

    printf("total : %11.4e\n", j);
}
