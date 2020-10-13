#include <stdio.h>

int main(){
    char x1[4], *a1;
    int x2[4], *a2;
    float x3[4], *a3;
    double x4[4], *a4;

    a1 = x1;
    a2 = x2;
    a3 = x3;
    a4 = x4;

    printf("%d %d %d %d \n", a1, a1+1, a1+2, a1+3);
    printf("%d %d %d %d \n", a2, a2+1, a2+2, a2+3);
    printf("%d %d %d %d \n", a3, a3+1, a3+2, a3+3);
    printf("%d %d %d %d \n", a4, a4+1, a4+2, a4+3);

    return 0;

    /*
        As respostas fornecidas pelo programa foram muito parecidas com as idealizadas, mudando apenas
        a valor de bytes por tipo de váriavel.
    */
}
