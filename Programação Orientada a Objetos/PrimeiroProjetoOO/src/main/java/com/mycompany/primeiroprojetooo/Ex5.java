package com.mycompany.primeiroprojetooo;

import java.util.Scanner;

public class Ex5 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int n, fat = 1;
        System.out.println("Qual o valor de N?");
        n = teclado.nextInt();
        if(n > 0){
            for(int i = n; i>0; i--) fat *= i;
            System.out.println("Fatorial de " + n + " : " + fat);
        }
        else System.out.println("Não foi possível calcular o fatorial.");
    }   
}