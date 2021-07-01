// 소수의 개수 구하기
// 결과 오류
#include <stdio.h>

int main(void)
{
    int k, i, j, m;
    int a[99];

    k = 1;

    do { // 배열에 k의 값을 넣어주는 처리
        k++; 
        a[k-2] = k; // a[0]부터 시작해야 하기 때문에
    } while (k < 100);
    
    i = -1, j = 0;

    while(1) {
        i++;
        if(i > 98) { // i가 98보다 크면 결과 출력
            printf("total prime number : %d", j);
            break;
        }
        if(a[i] == 0) continue;
        // continue는 배수를 쉽게 구하려고 할 때 주로 사용
        // 반복문의 시작으로 이동한다
        
        j++;
        m = i;

        while(1) { // 배수에 0을 넣어주는 작업
            m += a[i];
            if(m > 98) break; // n의 배수에 0을 넣는 작업이 끝나면 n+1로 이동하기 위해 break
            a[m] = 0;
        }
        
    }
}
