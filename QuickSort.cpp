#include <stdio.h>
#include <stdlib.h>

void imprimir(int vetor[], int max){
	for(int i=0; i< max; i++)
  	printf("%i\n", vetor[i]);
}

void QuickSort(int vetor[10], int inicio, int fim){
	int pivo, aux, i, j, meio;
   	i = inicio;
   	j = fim;
	   
   	meio = (int) ((i + j) / 2);
   	pivo = vetor[meio];
   
   	do{
    	while (vetor[i] < pivo)  i = i + 1;
      	while (vetor[j] > pivo)  j = j - 1;
      	if(i <= j){
        	aux = vetor[i];
         	vetor[i] = vetor[j];
         	vetor[j] = aux;
         	i = i + 1;
         	j = j - 1;
      	}
   	}while(j > i);
   
   	if(inicio < j) 
	   	QuickSort(vetor, inicio, j);
   	if(i < fim) 
   		QuickSort(vetor, i, fim);   
}	

main () {
  int max = 10;

  int  vetor[max] = {9,1,8,2,10,3,7,4,6,5};
  
  QuickSort(vetor,0, (max - 1));
  
  imprimir(vetor, max);
  
  return 0;
}

