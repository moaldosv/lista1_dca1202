#include <stdio.h>

void soma(int *v1, int *v2, int *v3, int n){
   for(int i = 0; i < n; i++){
       v3[i] = v1[i] + v2[i];
   }
}

int main()
{
   int *v1, *v2, *v3, n;

   printf("\nDigite o tamanho do vetor: \n");
   scanf("%d", &n);

   v1 = malloc(n*sizeof(int));
   v2 = malloc(n*sizeof(int));
   v3 = malloc(n*sizeof(int));

   printf("\nDigite os elementos do primeiro vetor: \n");
   for(int i = 0; i < n; i++){
       scanf("%d", &v1[i]);
   }

   printf("\nDigite os elementos do segundo vetor: \n");
   for(int i = 0; i < n; i++){
       scanf("%d", &v2[i]);
   }

   soma(v1, v2, v3, n);

   printf("\nA soma dos vetores sao:   ");
   for(int i = 0; i < n; i++){
       printf("\n%d  ", v3[i]);
   }

   free(v1);
   free(v2);
   free(v3);

   return 0;
}
