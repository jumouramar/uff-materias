package com.mycompany.primeiroprojetooo;

import java.util.Scanner;

public class Ex1 {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        
        int n, valor, negativo = 0;
        
        System.out.println("Ler quantos valores?");
        n = teclado.nextInt();
        
        for(int i = 0; i<n; i++){
            System.out.print("Escreva um valor: ");
            valor = teclado.nextInt();
            if(valor<0){
                negativo++;
            }
        }
        System.out.println(negativo + " valores são negativos.");
    }
    
}
