#include <stdio.h>

//変数の値入れ替えを行う関数
void swap(int*, int*);

int main(void){
    int a = 1, b = 2;
    printf("a= %d b = %d\n", a,b);
    swap(&a, &b);
    printf("a = %d b = %d\n", a,b);
}

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}