/*
 * quick_sort.c
 *
 *  Criado em: 19 de abr de 2024
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/OrdenacaoVetores
 *
 * .:: Quick Sort ::.
 *
 * Assim como o Shell Sort, o Quick Sort ordena vetores separando o mesmo em grupos e ordenando
 * estes grupos conforme vai varrendo o vetor.
 */

#include <stdio.h>

void quick_sort(int vetor[], int tam){
	int i, j, grupo, troca;

	//Criterio de parada da Recursividade
	if(tam < 2){
		return; //Sai da função
	}else{
		grupo = vetor[tam / 2];
	}

	//Faz um loop unico se comportar como dois loop
	for(i = 0, j = tam - 1;; i++, j--){

		//Faz a movimentação dos elementos no vetor
		while(vetor[i] < grupo){
			i++;
		}

		//Faz a movimentação dos elementos no vetor
		while(grupo < vetor[j]){
			j--;
		}

		//Criterio de Parada do Loop
		if(i >= j){
			break;
		}else{
			//Onde ocorrem as trocas
			troca = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = troca;
		}
	}

	//Usar a Recursividade para ordenar os grupos
	quick_sort(vetor, i);
	quick_sort(vetor + i, tam - i);
}

int main(){

	//Vetor Desordenado

	int vetor[6] = {8, 3, 1, 42, 12, 5};


	//Funcao de Ordenacao Utilizando Quick Sort
	quick_sort(vetor, 6);


	//Apresentando Vetor Ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
