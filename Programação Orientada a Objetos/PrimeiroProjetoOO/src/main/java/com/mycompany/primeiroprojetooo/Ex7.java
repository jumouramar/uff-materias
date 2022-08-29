package com.mycompany.primeiroprojetooo;

import java.util.Scanner;

public class Ex7 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        float nota, pessima=0, ruim=0, boa=0, otima=0, total=0;
       
        System.out.print("Nota: ");
        nota = teclado.nextInt();
        while(nota > -1 && nota < 101){
            if(nota<26) pessima++;
            else if(nota<51) ruim++;
            else if(nota<76) boa++;
            else otima++;
            
            total++; 
            
            System.out.print("Nota: ");
            nota = teclado.nextInt();
        }
        
        System.out.println("Péssimas: " + (pessima/total)*100 + "%");
        System.out.println("Ruins: " + (ruim/total)*100 + "%");
        System.out.println("Boas: " + (boa/total)*100 + "%");
        System.out.println("Ótimas: " + (otima/total)*100 + "%");
    }
}