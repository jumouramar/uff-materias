/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.primeiroprojetooo;

import java.util.Scanner;

/**
 *
 * @author juliana
 */
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
