// 수열2. 1-2+3-4+...+99-100의 합
#include <stdio.h>

int main(void)
{
    int i = 0, sum = 0;
    
    do {
        i++;
        
        if((i%2)!=0) { // 홀수
            sum += i;
        } else { // 짝수
            sum += (-i);
        }
    } while(i < 100);

    printf("total : %d\n", sum);
}
