// 2의 보수 쉽게 구하기
// 맨 오른쪽에서 왼쪽으로 1이 나올 때까진 그냥 써주고
// 1이 나오면 나머지는 반대로 써준다
#include <stdio.h>

int main(void)
{
    int i, j;
    int a[5] = {0, 1, 0, 1, 0}, b[5];

    for(i = 4; i >= 0; i--) {
        if(a[i] == 1) break;
        b[i] = a[i];
    }

    b[i] = a[i]; // i의 값이 위의 for문에서 이어져서 가능한가,,?

    for(j = i-1; j >= 0; j--) {
        b[j] = 1 - a[j];
    }

    printf("a : ");
    for(int k = 0; k < 5; k++) {
        printf("%d", a[k]);
    }
   
    printf("\nb : ");
    for(int k = 0; k < 5; k++) {
        printf("%d", b[k]);
    }
}
