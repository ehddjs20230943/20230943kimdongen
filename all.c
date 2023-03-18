#include<stdio.h>

int main() {
    int a = 3;
    int b = 4;

    printf("%d", a + b);
}

void main2() {
    int c, d;
    scanf("%d%d", &c, &d);
    printf("%d\n", c+d);
    return 0;
}

int main3() {
    int data[2];

    data[0] = 3;
    data[1] = 4;

    printf("%d", data[0] + data[1]);
}

void main4() {
    int e, f;
    FILE* fp;
    fp = fopen("my.txt", "r");
    fscanf(fp, "%d%d", &e, &f);
    fclose(fp);
    
    printf("%d\n", e + f);
}

struct Math{
    int a, b;
} me;

void main4() {
    me.a = 3;
    me.b = 4;
    printf("%d\n", me.a + me.b);
}
