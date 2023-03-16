// 5. 구조체 속에 두 수르 3과 4로 초기화하고 더하여 화면에 출력하시오.

#include<stdio.h>

struct Math{
    int a, b;
} me;

void main ()
{
    me.a = 3;
    me.b = 4;
    printf("%d\n", me.a + me.b);
}