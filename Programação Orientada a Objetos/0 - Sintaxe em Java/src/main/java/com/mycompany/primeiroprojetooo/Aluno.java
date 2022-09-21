package com.mycompany.primeiroprojetooo;

import java.util.Scanner;

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
