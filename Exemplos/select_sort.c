/*
 * select_sort.c
 *
 *  Criado em: 20 de abr de 2024
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/OrdenacaoVetores
 *
 * .:: Select Sort ::.
 *
 * Conhecido tambem como Selection Sort, eh um algoritmo de ordenacao basico, onde sempre o
 * menor valor sera passsado para o inicio do vetor (primeira posicao), e depois o segundo
 * menor valor sera passado para a segunda posicao e assim sucessivamente, ordenando desta
 * forma os valores do vetor.
 */


#include <stdio.h>

void select_sort(int vetor[], int tam){
	int menor, troca;

	//Loop Externo para repassar todo o vetor
	for(int i = 0; i < (tam - 1); i++){
		menor = i;
		//Loop Interno para Trabalhar com o Proximo Elemento
		for(int j = (i + 1); j < tam; j++){
			if(vetor[j] < vetor[menor]){
				menor = j;
			}
		}
		//Ocorrendo a Troca
		if(i != menor){
			troca = vetor[i];
			vetor[i] = vetor[menor];
			vetor[menor] = troca;
		}
	}
}

int main(){

	//Vetor Desordenado

	int vetor[6] = {8, 3, 1, 42, 12, 5};


	//Funcao de Ordenacao Utilizando Select Sort
	select_sort(vetor, 6);


	//Apresentando Vetor Ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
