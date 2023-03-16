// 4. my.txt 파일 속에 첫줄에는 3 둘째 줄에는 4가 있다. 이 파일의 값을 읽고 두 수를 더하여 화면에 출력하시오.

#include<stdio.h>

void main() {
    int a, b;
    FILE* fp;
    fp = fopen("my.txt", "r");
    fscanf(fp, "%d%d", &a, &b);
    fclose(fp);
    
    printf("%d\n", a + b);
}