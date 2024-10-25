//FELIPE UJVARI GASPARINO DE SOUSA, 10418415


# Criando o conteúdo do arquivo README.md conforme solicitado pelo usuário.

readme_content = 
# Lista Encadeada em C

Este projeto implementa uma lista encadeada simples em C. 

## Estrutura de Dados

A lista encadeada é representada por uma estrutura `celula`, que contém:
- Um campo `conteudo`, que armazena um valor inteiro.
- Um ponteiro `prox` para a próxima célula na lista.

### Estrutura da Célula


struct reg {
    int conteudo;
    struct reg *prox;
};
typedef struct reg celula;
Instâncias
Criamos três instâncias da célula com os valores 10, 20 e 30, ligadas por ponteiros para formar a lista encadeada.

Funções
1. Imprimir Lista
A função imprimeLista percorre a lista encadeada e imprime o valor de cada célula.


Sempre exibir os detalhes

Copiar código
void imprimeLista(celula *inicio);
2. Remover e Liberar Lista
A função removeLista percorre a lista encadeada e remove cada célula, liberando a memória alocada.


Sempre exibir os detalhes

Copiar código
void removeLista(celula **inicio);
Memória Utilizada
Cada célula da lista consome sizeof(celula) bytes, que variam de acordo com o sistema, mas neste caso corresponde a sizeof(int) + sizeof(struct reg*).

Exemplo de saída:

python
Sempre exibir os detalhes

Copiar código
Memória usada por cada célula: 16 bytes
Cálculo do Máximo de Elementos
Para calcular o número máximo de elementos possíveis na lista encadeada, considerando a memória disponível no sistema, você deve verificar o total de memória RAM disponível e dividir pelo tamanho de uma célula.

No Linux, por exemplo, você pode usar o comando free -b para obter a memória livre.

Uso
Clone este repositório.
Compile o código C utilizando gcc ou outro compilador de sua preferência.
Execute o programa.
Exemplo de compilação e execução:
bash
Sempre exibir os detalhes

Copiar código
gcc lista_encadeada.c -o lista_encadeada
./lista_encadeada
As funções acima irão:

Imprimir os valores da lista encadeada.
Informar a quantidade de memória usada por cada célula.
Remover a lista e liberar a memória.
