package com.mycompany.primeiroprojetooo;

import java.util.Scanner;

public class Ex8 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int n, verdade = 1;
        
        System.out.print("Ordem: ");
        n = teclado.nextInt();
        
        int[][] matriz = new int[n][n];
        int somas[] = new int[n*2+2];
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                System.out.print("Linha: " + i + " Coluna: " + j + " Elemento: ");
                matriz[i][j] = teclado.nextInt();
                
                somas[i] += matriz[i][j];
                somas[n+j] += matriz[i][j];
                if(i == j) somas[n*2] += matriz[i][j];
                if(i+j == n-1) somas[n*2+1] += matriz[i][j]; 
            }
        }
        
        for(int k = 0; k<n*2+2; k++){
            System.out.println("somas elemento " + k + ": " + somas[k]);
            if(somas[0] != somas[k]) verdade = 0;
        }
        
        if(verdade == 1) System.out.println("É quadrado mágico!");
        else System.out.println("Não é quadrado mágico!");
    }
}