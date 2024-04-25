/*
 * heap_sort.c
 *
 *  Criado em: 16 de abr de 2024
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/OrdenacaoVetores
 *
 * .:: Heap Sort ::.
 *
 * Conhecido tambem como Ordenacao usando Heap, utiliza um heap (vetor que simula uma arvore
 * binaria completa - com excecao do ultimo nivel) para realizar a ordenacao.
 *
 * Todo elemento "pai" do vetor possui dois elementos como "filhos".
 */

#include <stdio.h>

void cria_heap(int vetor[], int inicio, int fim){
	int pai = vetor[inicio];
	int filho = inicio * 2 + 1;

	//Pai tem 2 filhos. Quem é o maior?
	while(filho <= fim){
		if(filho < fim){
			if(vetor[filho] < vetor[filho + 1]){
				filho = filho + 1;
			}
		}

		//Filho é maior que o pai?
		//Filho se torna pai;
		//Repete o processo.
		if(pai < vetor[filho]){
			vetor[inicio] = vetor[filho];
			inicio = filho;
			filho = 2 * inicio + 1;
		}else{
			filho = fim + 1;
		}
	}

	//O antigo pai ocupa o lugar do último filho analisado
	vetor[inicio] = pai;
}

void heap_sort(int vetor[], int tam){
	int troca;
	int meio = (tam - 1) / 2;

	//Cria a heap a partir dos dados
	for(int i = meio; i >= 0; i--){
		cria_heap(vetor, i, tam - 1);
	}

	for(int i = tam - 1; i >= 1; i--){
		//Pega o maior Elemento da Heap e coloca
		//na sua posição correspondente no vetor
		troca = vetor[0];
		vetor[0] = vetor[i];
		vetor[i] = troca;

		//Reconstroi a heap
		cria_heap(vetor, 0, i - 1);
	}
}

int main(){

	//Vetor Desordenado

	int vetor[6] = {8, 3, 1, 42, 12, 5};


	//Funcao de Ordenacao Utilizando Heap Sort
	//vetor, inicio, fim
	heap_sort(vetor, 6);


	//Apresentando Vetor Ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
