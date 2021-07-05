// 소수점이 포함된 2진수를 10진수로 변환하기
// 10자리의 2진수는 문자열
// 5번째 자리까지는 소수 이상, 6번~10번째 자리는 소수 이하
// 소수 이하는 2의 -1승부터 1씩 내려감
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int main(void)
// {
//     int a, d, e;
//     int b = 0, c = 0;

//     printf("Please enter a number : ");
//     scanf("%d", &a);

//     do { // atoi(문자열) -> 문자열을 정수로 바꿔주는 함수, 숫자가 아닌 문자로 시작하는 문자열의 경우 0을 반환
//         c++;
//         d = val(mid(a, c, 1)); // d는 0, 1 둘 중에 하나의 값을 가짐
//         // val(문자열) -> 문자열을 숫자로 만들어 주는 함수
//         // mid(a, b, c) -> 문자열 a의 b 위치에서 c개의 문자를 추출하는 함수
//         e = d * pow(2, 4-c); // pow(2, 5) -> 2의 5승
//         b += e;
//     } while(c <= 10);
//     printf("result : %d", b);
// }

// 정답 코드
int main(void)
{
    char a[11], mj[2];
    double d, e;
    double b = 0;
    int c = -1; // 0부터 시작해야하기 때문에

    printf("Please enter a number : ");
    scanf("%s", a); // 배열에서는 &를 생략

    mj[1] = '\0'; // c언어에서는 '\0'가 있으면 문자열로 인식

    while(1) {
        c++;
        if(c <= 9) {
            mj[0] = a[c]; // mj[0]에는 a의 각 자리마다 2진수 중 하나의 값이 들어감
            d = atoi(mj); // d에는 mj[0]의 값만 저장
            e = d * pow(2, 4-c); 
            b += e;
        } else {
            printf("result :%8.5f", b);
            break;
        }
    }
}

