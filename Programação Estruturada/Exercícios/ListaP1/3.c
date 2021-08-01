/* Escreva um programa para o seguinte problema: determinar se uma palavra A ocorre dentro de uma cadeia de caracteres B, mesmo que de forma não contígua. Fazer uma função que retorne 1 se A ocorrer dentro de B e zero, caso contrário. Exemplo:
A = "lanterna"
B = "No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença."
Resposta: A ocorre dentro de B:
    No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença. */

#include <stdio.h>
#include <string.h>

#define ATAM 20
#define BTAM 100

int ocorre(char A[], char B[]){
    int tamA, tamB, posi, ocorre=0;
    tamA = strlen(A);
    tamB = strlen(B);
    posi = 0;
    for (int i = 0; i<tamA; i++) {
        for (int j = posi; j<tamB; j++) {
            if (A[i] == B[j]) {
                posi = j+1;
                ocorre++;
                break;
            }
        }
        if (ocorre != i+1) return 0;
    }
    return 1;
}

int main(){

    char A[ATAM]; 
    char B[BTAM];

    printf("Escreva a palavra 'A' que deseja verificar: ");
    fgets(A, ATAM, stdin);
    printf("Escreva a frase 'B' que deseja verificar: ");
    fgets(B, BTAM, stdin);

    if(ocorre(A, B)) printf("A ocorre dentro de B\n");
    else printf("A não ocorre dentro de B\n");

    return 0;
}