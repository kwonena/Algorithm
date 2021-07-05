// 10진수를 임의의 진수로 변환하기
// 가장 가까운 2의 누승(거듭제곱)부터 1까지 차례대로 나눈다.
#include <stdio.h>

int main(void)
{
    int b, c, d, e, f;
    char a[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'f'};
    
    printf("Please enter two number : ");
    scanf("%d %d", &b, &c);

    d = 1;

    do {
        d *= b;
    } while(d <= c); // 부호 주의

    while(1) { 
        if(d > 1) d /= b;
            
        e = (int)c / d;
        f = c - e * d;

        printf("%c", a[e]);

        if(d != 1) c = f;
        else break;
    }    
}
