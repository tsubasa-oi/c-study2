#include <stdio.h>

int main(void){
    double d[3] = {0.2, 0.4, 0.6};
    double *p1 = NULL, *p2 = NULL;
    int i;
    p1 = d;
    p2 = d;
    for (i = 0; i < 3; i++){
        printf("%lf %lf %lf\n", *(d + i), p1[i], *p2);
        p2++; //p2のアドレスをインクリメント
    }
}