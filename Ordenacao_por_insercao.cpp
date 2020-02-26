#include <stdio.h>
#include <stdlib.h>

void imprimir(int vetor[], int max){
	for(int i=0; i< max; i++)
  	printf("%i\n", vetor[i]);
}

void insertionSort(int vetor[], int max) 
{ 
    int i, chave, j; 
    for (i = 1; i < max; i++) { 
        chave = vetor[i]; 
        j = i - 1; 

        while (j >= 0 && vetor[j] > chave) { 
            vetor[j + 1] = vetor[j]; 
            j = j - 1; 
        } 
        vetor[j + 1] = chave; 
        
        printf("Passo %i\n", (i + 1));
      	imprimir(vetor, max);
      	printf("\n");
    } 
} 

main () {
  int max = 10;

  int  vetor[max] = {9,1,8,2,10,3,7,4,6,5};
  
  insertionSort(vetor, max);
  
  imprimir(vetor, max);
  
  return 0;
}

