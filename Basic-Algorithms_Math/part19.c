// 최대공약수, 최소공배수
#include <stdio.h>

int main(void)
{
    int a, b, big, small, mok, nmg, gcm, lcm;

    printf("Please enter two number : ");
    scanf("%d %d", &a, &b);

    // 입력 받은 a와 b의 대소 비교 후 각각 big과 small에 대입
    if(a > b) {
        big = a;
        small = b;
    } else {
        big = b;
        small = a;
    }

    while(1) {
        mok = (int)(big/small);
        nmg = big % small; // nmg = big - mok * small;

        if(nmg == 0) {
            gcm = small;
            lcm = (a * b)/ gcm;
            printf("gcm : %d, lcm : %d", gcm, lcm);
            break;
        } else {
            big = small;
            small = nmg;
        }
    }

    

}
