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
public class Ex7 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int nota, pessima=0, ruim=0, boa=0, otima=0, total=0;
       
        do{
            System.out.print("Nota: ");
            nota = teclado.nextInt();
            
            total++;
            
            if(nota<26) pessima++;
            else if(nota<51) ruim++;
            else if(nota<76) boa++;
            else otima++;
            
        } while( nota > -1 && nota < 101);
        
        System.out.println("Péssimas: " + (pessima/total)*100 + "%");
        System.out.println("Ruins: " + (ruim/total)*100 + "%");
        System.out.println("Boas: " + (boa/total)*100 + "%");
        System.out.println("Ótimas: " + (otima/total)*100 + "%");
        
    }
}