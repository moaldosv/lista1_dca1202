#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, aux;
    float *vetor;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = malloc(n*sizeof(float));

    printf("\nDigite os valores do vetor: ");
    for(int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado de forma crescente: \n");
    for(int i = 0; i < n; i++){
        printf("%f", vetor[i]);
        printf(" ");
    }

    free(vetor);
    
    return 0;
}
