/*
 * bubble_sort.c
 *
 *  Criado em: 15 de abr de 2024
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/OrdenacaoVetores
 *
 * .:: Bubble Sort ::.
 *
 * Conhecido tambem como algoritmo de troca, ou algoritmo de bolha, eh um algoritmo de ordenacao simples,
 * sendo que a ideia eh percorrer o vetor varias vezes, e a cada vez, 'flutuar' o maior elemento da sequencia.
 *
 * Esse movimento lembra a forma de como as bolhas em um reservatorio de agua procuram seu proprio nivel.
 *
 * Esse metodo, apesar de considerado eficaz, acaba passando varias vezes pelas mesmas posicoes do vetor
 * no pior dos casos, executando o loop novamente, voltando ao inicio e percorrendo o vetor ate finalizar.
 *
 * Nao eh recomendado para programas que precisam de velocidade.
 *
 */

#include <stdio.h>

void bubble_sort(int vetor[], int tam){
	//Variavel Auxiliar
	int proximo = 0;

	//Varre todo o vetor Externo
	for(int i = 0; i < tam; i++){
		//Trabalha com os proximos elementos
		for(int j= 0; j < (tam - 1); j++){
			//Ocorre a troca
			if(vetor[j] > vetor[j + 1]){
				proximo = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = proximo;
			}
		}
	}
}

int main(){

	//Vetor Desordenado

	int vetor[6] = {8, 3, 1, 42, 12, 5};


	//Funcao de Ordenacao Utilizando Bubble Sort
	bubble_sort(vetor, 6);


	//Apresentando Vetor Ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
