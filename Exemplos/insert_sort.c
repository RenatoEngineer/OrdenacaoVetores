/*
 * insert_sort.c
 *
 *  Criado em: 17 de abr de 2024
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/OrdenacaoVetores
 *
 * .:: Insert Sort ::.
 *
 * Conhecido tambem como Insertion Sort, e um algoritmo simples, mas eficiente quando usado em
 * vetores pequenos. Basicamente ele percorre um vetor da esquerda para a direita, e conforme
 * avanca, vai alinhando os valores da sua esquerda.
 */

#include <stdio.h>

void insert_sort(int vetor[], int tam){
	int troca;

	//Percorre todo o Vetor
	for(int i = 1; i < tam; i++){
		int proximo = i;

		//Responsavel pelas trocas
		while((proximo != 0) && (vetor[proximo] < vetor[proximo - 1])){
			troca = vetor[proximo];
			vetor[proximo] = vetor[proximo - 1];
			vetor[proximo - 1] = troca;
			proximo--;
		}
	}
}

int main(){

	//Vetor Desordenado
	int vetor[6] = {8, 3, 1, 42, 12, 5};


	//Funcao de Ordenacao Utilizando Insert Sort
	insert_sort(vetor, 6);


	//Apresentando Vetor Ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
