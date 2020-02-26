#include <stdio.h>
#include <stdlib.h>

void imprimir(int vetor[], int max){
	for(int i=0; i< max; i++)
  	printf("%i\n", vetor[i]);
}

void selection_sort (int vetor[], int max) {
  int i, j, min, aux;
  
  for (i = 0; i < (max - 1); i++) {
    min = i;
    for (j = i+1; j < max; j++) {
      if (vetor[j] < vetor[min]) {
   		min = j;
      }
    }
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
      printf("Passo %i\n", (i + 1));
      imprimir(vetor, max);
      printf("\n");
    }
  }
}

main () {
  int max = 10;

  int  vetor[max] = {9,1,8,2,10,3,7,4,6,5};
  
  selection_sort(vetor, max);
  
  imprimir(vetor, max);
  
  return 0;
}

