// 수열5. 피보나치 수열의 합
// 20번째 항까지의 합계
#include <stdio.h>

int main(void)
{
    int hap, cnt, c;
    int a = 1, b = 1;

    hap = 2;
    cnt = 2; // 항의 개수
        
    while(1) {
        c = a + b;
        hap += c;
        cnt++;

        if(cnt < 20) {
            a = b;
            b = c;
        } else {
            printf("total : %d\n", hap);
            break;
        }
    }
    
}
