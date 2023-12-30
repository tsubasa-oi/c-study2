#include <stdio.h>

// int main(void){
//     int a = 100;
//     double b = 123.4;
//     float c = 123.4f;
//     char d = 'a';
//     printf("aの値は%d、大きさは%dbyte、アドレスは0x%x\n", a, sizeof(int), &a);
// }


// ポインタの基礎

void show(int, int, int);

int main(void){
    int a = 100; // 整数変数型a
    int b = 200; // 整数変数型b
    int *p = NULL; //整数型のポインタ変数p
    p = &a; // pにaのアドレスを代入
    show(a, b, *p);
    *p = 300;
    show(a, b, *p);
    p = &b;
    show(a, b, *p);
    *p = 400;
    show(a, b, *p);
}

void show(int n1, int n2, int n3){
    printf("a = %d b= %d *p = %d\n", n1,n2,n3);
}

