// 10진수를 2진수로 변환하기
// 10진수를 2로 나눈 나머지를 배열에 저장하고,
// 몫을 다시 2로 나누며 몫이 0이 될때까지 반복하는 알고리즘
#include <stdio.h>

int main(void)
{
    int b, bb, c, mok, nmg, i;
    int a[10];

    printf("Please enter a number : ");
    scanf("%d", &b);

    bb = b;
    c = -1;

    while(1) { // do-while
        c++;
        mok = (int)b/2;
        nmg = b - mok*2;
        a[c] = nmg;
        
        if(mok == 0) { 
            printf("bb : %d\n", bb);
            for(i = c; i >= 0; i--) printf("%d ", a[i]);
            // 처음부터 배열의 끝부터 저장하면 차례대로 출력할 수 있다.
            break;
        }

        b = mok;
    } 
}