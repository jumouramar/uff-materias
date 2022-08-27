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
public class Aluno {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        String nome;
        int idade;
        
        System.out.println("Digite o nome do aluno:");
        nome = teclado.next();
        System.out.println("Nome: "+ nome);
        
        System.out.println("Digite a idade do aluno:");
        idade = teclado.nextInt();
        System.out.println("Idade: " + idade);
        
        System.out.println("Aluno(a) " + nome + " tem " + idade + " anos.");
    }
}
