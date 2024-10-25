//FELIPE UJVARI GASPARINO DE SOUSA, 10418415

Criação de três instâncias da célula:
Foram criadas três instâncias da estrutura celula, cada uma com um valor inteiro:

Primeira célula: valor 10
Segunda célula: valor 20
Terceira célula: valor 30
As células estão conectadas umas às outras para formar uma lista encadeada.

2 Função que imprime todos os valores da lista:
A função percorre a lista e imprime o valor de cada célula:

void imprimeLista(celula *inicio) {
    celula *atual = inicio;
    while (atual != NULL) {
        printf("%d\n", atual->conteudo);
        atual = atual->prox;
    }
}

3 Quantidade de memória gasta por cada instância da célula:
A memória gasta por cada célula é a soma do tamanho de um inteiro e de um ponteiro para a próxima célula:
sizeof(int) + sizeof(struct reg*)

Em um sistema de 64 bits, cada célula ocupa 16 bytes.

4 Função que remove os elementos da lista:
Essa função percorre a lista e remove cada elemento:
void removeLista(celula **inicio) {
    celula *atual = *inicio;
    celula *prox;
    while (atual != NULL) {
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
    *inicio = NULL;
}


5 Liberação de memória ao remover um elemento:
Na função removeLista, a memória de cada célula é liberada usando free(atual) antes de passar para o próximo elemento.

6 Cálculo do máximo de elementos possíveis na fila:
Para calcular o número máximo de elementos, é preciso dividir a quantidade de memória disponível pelo tamanho de cada célula. Considerando um sistema com 16MB de memória disponível:
memoria_disponivel / sizeof(celula)

No exemplo, seriam aproximadamente 1 milhão de células com 16MB de memória.






