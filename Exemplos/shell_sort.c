/*
 * shell_sort.c
 *
 *  Criado em: 21 de abr de 2024
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/OrdenacaoVetores
 *
 * .:: Shell Sort ::.
 *
 * O Algoritmo Shell Sort trabalha com o outro algoritmo ja conhecido Insert Sort, mas fazendo
 * uma separacao em grupos menores e ordenando estes grupos menores, ordenando assim todo o
 * vetor.
 */

#include <stdio.h>

void shell_sort(int vetor[], int tam){
	//Variavel Auxiliar
	int grupo = 1;

	//Gera o tamanho do grupo de acordo com o tamanho do Vetor
	while(grupo < tam){
		grupo = 3 * grupo + 1;
	}

	//Varre o Vetor enquanto houver grupos para ordenar
	while(grupo > 1){
		//Divide o grupo em 3 partes
		grupo /= 3;
		//Varre cada grupo
		for(int i = grupo; i < tam; i++){
			int troca = vetor[i];
			int j = i - grupo;
			//realiza a troca
			while(j >= 0 && troca < vetor[j]){
				vetor[j + grupo] = vetor[j];
				j -= grupo;
			}
			//realiza a troca
			vetor[j + grupo] = troca;
		}
	}
}

int main(){

	//Vetor Desordenado

	int vetor[6] = {8, 3, 1, 42, 12, 5};


	//Funcao de Ordenacao Utilizando Shell Sort
	shell_sort(vetor, 6);


	//Apresentando Vetor Ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
