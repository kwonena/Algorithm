// 구조체 : 자료의 종류가 다른 변수의 모임

#include <stdio.h>

struct sawon
{
    char name[10];
    char jikwi[10];
    int pay;
};

struct sawon data; // 구조체 변수의 선언

main()
{
    printf("name : ");
    scanf_s("%s", data.name);
    printf("jikwi : ");
    scanf_s("%s", data.jikwi);
    printf("pay : ");
    scanf_s("%d", data.pay);

    printf("\n\n");

    printf("name : %s\n", data.name);
    printf("jikwi : %s\n", data.jikwi);
    printf("pay : %d\n", data.pay);

    return 0; 
}