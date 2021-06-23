// 수열3. 부호가 다른 분수의 합
#include <stdio.h>

int main(void)
{
    float i = 0, j = 0;
        
    do {
        i = i + 1; // 분자 증가
        
        if((int)(i/2)==i/2) { // (i%2)!=0
            j += i/(i+1);
        } else {
            j -= i/(i+1);
        }
    } while(i < 99);

    printf("total : %f\n", j);
}
