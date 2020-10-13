#include <stdio.h>
#include <stdlib.h>

// Funcao q realiza a comparacao entre os numeros
int comparar(const void *a, const void *b) {
    return ( *(int*)a - *(int*)b );
}

int main () {
    int n; // tamanho n do vetor
    float *vetor; // vetor

    // Solicita o tamanho do vetor e armazena na variavel n
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &n);

    // Aloca memoria do vetor 
    vetor = malloc(n*sizeof(float));

    // Recebe os valores das posicoes do vetor
    printf("\nDigite os valores do vetor: ");
    for(int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    // Chama a funcao qsort para realizar a ordenacao do vetor
    qsort(vetor, n, sizeof(float), comparar);

    // Exibe os elementos do vetor ja ordenado 
    printf("\nVetor ordenado de forma crescente: \n");
    for(int i = 0; i < n; i++){
        printf("%f", vetor[i]);
        printf(" ");
    }

    // Libera a memoria alocada para o vetor
    free(vetor);
    
    return 0;
}
