// 구조체에서 포인터 사용하기

#include <stdio.h>

struct sawon
{
    char name[10];
    char jikwi[10];
    int pay;
};

struct sawon *data; // 구조체의 포인터 변수 선언

main()
{
    printf("이름 : ");
    scanf("%s", data->name); // 포인터는 멤버 지정시 .이 아닌 ->를 사용한다
    printf("직위 : ");
    scanf("%s", data->jikwi);
    printf("급여 : ");
    scanf("%d", data->pay);

    printf("\n\n");

    printf("이름 : %s\n", data->name);
    printf("직위 : %s\n", data->jikwi);
    printf("급여 : %d\n", data->pay);

    return 0;
}