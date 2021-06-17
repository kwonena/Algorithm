// 배열과 포인터
// 배열은 상수 형태의 포인터로써 포인터상수라고도 불린다. 
#include <stdio.h>

main()
{
    int arr[3] = {15, 25, 35};
    int *ptr = &arr[0]; // int *ptr = arr;와 동일한 문장

    printf("%d %d \n", ptr[0], arr[0]);
    printf("%d %d \n", ptr[0] + 1, arr[0]);
    printf("%d %d \n", ptr[1], arr[1]);
    printf("%d %d \n", ptr[2], arr[2]);
    printf("%d %d \n", *ptr, *arr);

    return 0;
}