// 사용자 정의 함수
#include <stdio.h>
void func(int i, int j);

int main(void)
{
    int a = 3, b = 12;
    func(a, b);    
    printf("%d %d\n", a, b);
}

void func(int i, int j) {
    i *= 3;
    j /= 3;
    printf("%d %d\n", i, j);
}