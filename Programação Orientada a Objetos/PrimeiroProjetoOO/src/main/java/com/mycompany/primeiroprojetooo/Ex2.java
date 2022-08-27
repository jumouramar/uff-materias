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
        
        if(r>s & r>t) System.out.println("R = " + r + " é o maior valor");
        else if(s> r & s>t) System.out.println("S = " + s + " é o maior valor");
        else System.out.println("T = " + t + " é o maior valor");
    }
}
