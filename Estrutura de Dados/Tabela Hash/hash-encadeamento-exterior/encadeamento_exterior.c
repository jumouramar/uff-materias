#include <limits.h>
#include <stdio.h>

#include "cliente.c"
#include "compartimento_hash.c"

#define M 7

void imprime_arquivos(char *nome_arquivo_hash, char *nome_arquivo_dados) {
    //Imprime arquivo de hash
    printf("TABELA HASH:\n");
    imprime_arquivo_hash(nome_arquivo_hash);

    //Imprime arquivo de dados
    printf("\nDADOS:\n");
    imprime_arquivo_dados(nome_arquivo_dados);
}

/* Executa busca em Arquivos por Encadeamento Exterior (Hash)
 * Assumir que ponteiro para proximo noh eh igual a -1 quando nao houver proximo noh
 * Ponteiros são lógicos (é preciso multiplicar pelo tamanho do registro para calcular o valor do deslocamento
 * Use a função tamanho_compartimento() e tamanho_cliente() dependendo do arquivo que está sendo manipulado
 *
 * Parametros:
 * cod_cli: chave do cliente que esta sendo buscado
 * nome_arquivo_hash: nome do arquivo que contem a tabela hash
 * nome_arquivo_dados: nome do arquivo onde os dados estao armazenados
 * m: tamanho da tabela hash (a função de hash é h(x) = x mod m
 *
 * Retorna o endereco (lógico) onde o cliente foi encontrado, ou -1 se nao for encontrado
 */
int busca(int cod_cli, char *nome_arquivo_hash, char *nome_arquivo_dados, int m) {
    int enderecoHash = cod_cli%7;
    int conteudoHash;

    FILE *arqHash = fopen(nome_arquivo_hash, "rb");
    fseek(arqHash, enderecoHash*tamanho_compartimento(), SEEK_SET);
    fread(&conteudoHash, sizeof(int), 1, arqHash);
    if(conteudoHash == -1) 
        return -1;

    FILE *arqDados = fopen(nome_arquivo_dados, "rb");
    fseek(arqDados, conteudoHash*tamanho_cliente(), SEEK_SET);
    TCliente* cliente = le_cliente(arqDados);
    int existe = 0;
    imprime_cliente(cliente);
    if(cliente->cod == cod_cli){
        enderecoHash = cliente->ocupado? conteudoHash : -1;
        existe = 1;
    }
            
    while(cliente->prox != -1){
        int proxEndereco = cliente->prox;
        fseek(arqDados, cliente->prox*tamanho_cliente(), SEEK_SET);
        cliente = le_cliente(arqDados);
        if(cliente->cod == cod_cli){
            enderecoHash = cliente->ocupado? proxEndereco  : -1;
            existe = 1;
        }
            
        imprime_cliente(cliente);
    }
    
    fclose(arqHash);
    fclose(arqDados);

    if(existe == 0) return -1;
    else return enderecoHash;
}

int main() {
    /* Essa função gera a saída que é usada no teste do run.codes. Ela NÃO DEVE SER MODIFICADA */
    int cod;
    int pont;

    //Imprime arquivos de entrada
    //imprime_arquivos("tabHash.dat", "clientes.dat");

    //le chave a ser buscada
    scanf("%d", &cod);
    printf("REGISTROS ACESSADOS:\n");
    pont = busca(cod, "tabHash.dat", "clientes.dat", M);

    //Imprime resultado da função
    printf("RESULTADO: %d", pont);
}