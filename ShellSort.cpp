#include <stdio.h>
#include <stdlib.h>

void imprimir(int vetor[], int max){
	for(int i=0; i< max; i++)
  	printf("%i\n", vetor[i]);
}

void shell_sort(int vetor[], int max) {
	int i = (max - 1) / 2;
  	int chave, k, aux;
	int passo = 1;
  	while (i != 0){
    	do{
      		chave = 1;
      		for (k = 0; k < max - i; ++k){
        		
				if (vetor[k] > vetor[k + i]){
          			aux = vetor[k];
          			vetor[k] = vetor[k + i];
          			vetor[k + i] = aux;
          			chave = 0;
          
        			printf("Passo %i\n",passo);
      				imprimir(vetor, max);
      				printf("\n");
      				passo++;
        		}
      		}
    	} while (chave == 0);
    i = i / 2;
  }
}

main () {
  int max = 10;

  int  vetor[max] = {9,1,8,2,10,3,7,4,6,5};
  
  shell_sort(vetor, max);
  
  imprimir(vetor, max);
  
  return 0;
}

