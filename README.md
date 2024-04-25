# .:: Ordenação de Vetores em C ::.

#### .:: Select Sort ::.
<p></p>
<p><strong>Conhecido também como Selection Sort, é um algoritmo de ordenação básica, onde sempre o menor valor será passado para o início do vetor (primeira posição), e depois o segundo menor valor será passado para a segunda posição e assim sucessivamente, ordenando desta forma os valores do vetor.</strong></p>

[Exemplo](./Exemplos/select_sort.c)

#### .:: Insert Sort ::.
<p></p>
<p><strong>Conhecido tambem como Insertion Sort, e um algoritmo simples, mas eficiente quando usado em vetores pequenos. Basicamente ele percorre um vetor da esquerda para a direita, e conforme avança, vai alinhando os valores da sua esquerda.</strong></p>

[Exemplo](./Exemplos/insert_sort.c)

#### .:: Bubble Sort ::.
<p></p>
<p><strong>Conhecido também como algoritmo de troca, ou algoritmo de bolha, é um algoritmo de ordenação simples, sendo que a ideia é percorrer o vetor várias vezes, e a cada vez, 'flutuar' o maior elemento da sequência.</strong></p>
<p><strong>Esse movimento lembra a forma de como as bolhas em um reservatório de água procuram seu próprio nível.</strong></p>
<p><strong>Esse método, apesar de considerado eficaz, acaba passando várias vezes pelas mesmas posições do vetor no pior dos casos, executando o loop novamente, voltando ao início e percorrendo o vetor até finalizar.</strong></p>
<p><strong>Não é recomendado para programas que precisam de velocidade.</strong></p>

[Exemplo](./Exemplos/bubble_sort.c)

#### .:: Shell Sort ::.
<p></p>
<p><strong>O Algoritmo Shell Sort trabalha com o outro algoritmo já conhecido Insert Sort, mas fazendo uma separação em grupos menores e ordenando estes grupos menores, ordenando assim todo o vetor.</strong></p>

[Exemplo](./Exemplos/shell_sort.c)

#### .:: Quick Sort ::.
<p></p>
<p><strong>Assim como o Shell Sort, o Quick Sort ordena vetores separando o mesmo em grupos e ordenando estes grupos conforme vão varrendo o vetor.</strong></p>

[Exemplo](./Exemplos/quick_sort.c)

#### .:: Merge Sort ::.
<p></p>
<p><strong>Conhecido também como algoritmo de Ordenação por Mistura, utiliza a ideia básica de Dividir e Conquistar.</strong></p>
<p><strong>Ele divide, recursivamente, o vetor até que cada subconjunto possua 1 elemento, fazendo a combinação de 2 subconjuntos de forma a obter 1 conjunto maior e ordenado.</strong></p>
<p><strong>Este processo se repete até que exista apenas 1 conjunto.</strong></p>

[Exemplo](./Exemplos/merge_sort.c)

#### .:: Heap Sort ::.
<p></p>
<p><strong>Conhecido também como Ordenação usando Heap, utiliza um heap (vetor que simula uma arvore binaria completa - com exceção do último nível) para realizar a ordenação.</strong></p>
<p><strong>Todo elemento "pai" do vetor possui dois elementos como "filhos".</strong></p>

[Exemplo](./Exemplos/heap_sort.c)

