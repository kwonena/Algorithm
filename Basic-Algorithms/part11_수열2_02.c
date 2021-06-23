// 수열2. 1-2+3-4+...+99-100의 합
// 스위치 변수 이용하기
#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    int sw = 0; // sw는 스위치 변수
    
    do {
        i = i + 1;
        
        if(sw == 0) { 
            j += i;
            sw = 1;
        } else { 
            j -= i;
            sw = 0;
        }
    } while(i < 100);

    printf("total : %d\n", j);
}
