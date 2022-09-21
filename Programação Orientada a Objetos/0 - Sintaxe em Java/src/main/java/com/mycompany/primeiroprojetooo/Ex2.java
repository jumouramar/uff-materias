package com.mycompany.primeiroprojetooo;

import java.util.Scanner;

public class Ex2 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        float r, s, t;
        
        System.out.print("Valor de R: ");
        r = teclado.nextFloat();
        System.out.print("Valor de S: ");
        s = teclado.nextFloat();
        System.out.print("Valor de T: ");
        t = teclado.nextFloat();
        
        if(r>=s && r>=t){
            if(r == s) System.out.println("R e S são os maiores valores");
            else if(r == t) System.out.println("R e T são os maiores valores");
            else System.out.println("R é o maior valor");
        }
        else if(s>=r && s>=t){
            if(s == t) System.out.println("S e T são os maiores valores"); 
            else System.out.println("S é o maior valor");
        }
        else System.out.println("T é o maior valor");
    }
}