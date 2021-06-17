// Pointer
// 주소를 저장할 수 있는 변수 -> 포인터 변수
#include <stdio.h>

main()
{
    int a = 20;
    int *b;
    b = &a;
    *b = *b + 10;
    printf("%d %p %d\n", a, b, *b);
}
