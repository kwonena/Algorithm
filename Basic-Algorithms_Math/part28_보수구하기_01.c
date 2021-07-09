// 1의 보수, 2의 보수 구하기
// 1의 보수 : 0 <-> 1, 2의 보수 : 1의 보수 + 1 
// 1의 보수 알고리즘 : 1에서 변환할 값을 빼준다
// 2의 보수 알고리즘 : 5번째 배열에 1을 더해주고 2를 초과한다면 2로 나누고 자리올림을 해준다ㄱㅋ
#include <stdio.h>

int main(void)
{
    int a[5], one[5], two[5];
    int i = -1, c = 1; // 자리 올림수 c는 1부터 시작

    printf("Please enter five number : ");
    do {
        i++;
        scanf("%d", &a[i]); // 0 또는 1만 입력
        one[i] = 1 - a[i];
    } while(i < 4); 
    
    while(i >= 0) {
        two[i] = one[i] + c;
        two[i] % 2;
        c = one[i] * c;
        i--;
    }

    printf("a : ");
    for(int k = 0; k < 5; k++) {
        printf("%d", a[k]);
    }
   
    printf("\none : ");
    for(int k = 0; k < 5; k++) {
        printf("%d", one[k]);
    }

    printf("\ntwo : ");
    for(int k = 0; k < 5; k++) {
        printf("%d", two[k]);
    }
}
