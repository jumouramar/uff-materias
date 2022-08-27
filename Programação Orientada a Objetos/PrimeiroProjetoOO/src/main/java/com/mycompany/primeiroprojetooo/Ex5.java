/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.primeiroprojetooo;

/**
 *
 * @author juliana
 */

import java.util.Scanner;

public class Ex5 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int n, fat = 1;
        System.out.println("Qual o valor de N?");
        n = teclado.nextInt();
        if(n > 0){
            for(int i = n; i>0; i--){
                fat *= i;
            }
            System.out.println(fat);
        }
        else System.out.println("Não foi possível calcular o fatorial.");
        
    }
    
}
