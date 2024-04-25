/*
 * merge_sort.c
 *
 *  Criado em: 18 de abr de 2024
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/OrdenacaoVetores
 *
 * .:: Merge Sort ::.
 *
 * Conhecido tambem como algoritmo de Ordenacao por Mistura, utiliza a ideia basica de Dividir
 * e Conquistar.
 *
 * Ele divide, recursivamente, o vetor ate que cada subconjunto possua 1 elemento, fazendo a
 * combinacao de 2 subconjuntos de forma a obter 1 conjunto maior e ordenado.
 *
 * Este processo se repete ate que exista apenas 1 conjunto.
 */

#include <stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2){
	//Vetor Temporário para o Merge
	int temp[50];
	//Variáveis auxiliares
	int i, j, k;

	//Inicio do primeiro grupo
	i = inicio1;

	//Inicio do segundo grupo
	j = inicio2;

	k = 0;

	//Enquanto tiver elementos em ambos os grupos
	while(i <= fim1 && j <= fim2){
		//Faz a ordenação de acordo com cada grupo
		if(vetor[i] < vetor[j]){
			temp[k++] = vetor[i++];
		}else{
			temp[k++] = vetor[j++];
		}
	}

	//Copia os Elementos restantes do primeiro grupo
	while(i <= fim1){
		temp[k++] = vetor[i++];
	}

	//Copia os elementos restantes do segundo grupo
	while(j <= fim2){
		temp[k++] = vetor[j++];
	}

	//Transfere os elementos do vetor temporário para o original
	for(i = inicio1, j = 0; i <= fim2; i++, j++){
		vetor[i] = temp[j];
	}
}

void merge_sort(int vetor[], int inicio, int fim){
	//Condição de parada da Recursão
	if(inicio < fim){
		//Calcula o meio do vetor
		int meio = (inicio + fim) / 2;

		//Recursão esquerda
		merge_sort(vetor, inicio, meio);

		//Recursão direita
		merge_sort(vetor, meio + 1, fim);

		//Faz o Merge (junta) com os dois grupos de vetores ordenados
		merge(vetor, inicio, meio, meio + 1, fim);
	}
}

int main(){

	//Vetor Desordenado

	int vetor[6] = {8, 3, 1, 42, 12, 5};


	//Funcao de Ordenacao Utilizando Merge Sort
	//vetor, inicio, fim
	merge_sort(vetor, 0, 6 - 1);


	//Apresentando Vetor Ordenado
	for(int i = 0; i < 6; i++){
		printf("%d\n", vetor[i]);
	}

	return 0;
}
