// 수열2. 1-2+3-4+...-98+99의 합
// 순서에 의한 반복 계산
#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    
    while(1) {
        i++;
        j += i;

        if(i>=99) { // while을 빠져나오기 위한 조건문
            printf("total : %d\n", j);
            break;
        } else {
            i++;
            j -= i;
        }
    }

}
