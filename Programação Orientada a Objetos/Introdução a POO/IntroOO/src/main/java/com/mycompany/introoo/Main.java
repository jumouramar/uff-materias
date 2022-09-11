package com.mycompany.introoo;

public class Main {
    public static void main(String[] args) {
            
            // construtor: tipo nomeDoObjeto = new tipo();
            BoloRetangular boloChocolate = new BoloRetangular();
            
            // atributos não foram inicializados
            imprimir(boloChocolate); 
            
            boloChocolate.peso = 3; 
            boloChocolate.sabor = "Chocolate";
            boloChocolate.cobertura = "Morango";
            
            imprimir(boloChocolate);
            
            boloChocolate.comer(1);
            
            imprimir(boloChocolate);
            
            boloChocolate.decorar();
            
            BoloRetangular boloMorango = new BoloRetangular();
            
            boloMorango.peso = 4; 
            boloMorango.sabor = "Morango";
            boloMorango.cobertura = "Brigadeiro";
            
            System.out.println("Bolo de morango: ");
            imprimir(boloMorango);
            System.out.println("Bolo de chocolate: ");
            imprimir(boloChocolate);
            
            boloChocolate.comer(1);
            System.out.println("Depois de comer...");
            System.out.println("Bolo de morango: ");
            imprimir(boloMorango);
            System.out.println("Bolo de chocolate: ");
            imprimir(boloChocolate);
            
            // morango recebeu todos os atributos de chocolate
            boloMorango = boloChocolate;
            System.out.println("Bolo de morango: ");
            imprimir(boloMorango);
            System.out.println("Bolo de chocolate: ");
            imprimir(boloChocolate);
            
            // se mudar morango, também muda chocolate
            // ao fazer morango = chocolate, morango passa a apontar  
            // para o mesmo espaço de memória que chocolate
            boloMorango.comer(1);
            System.out.println("Bolo de morango: ");
            imprimir(boloMorango);
            System.out.println("Bolo de chocolate: ");
            imprimir(boloChocolate);
            
    }
    
    static void imprimir(BoloRetangular bolo){
        System.out.println("Peso: " + bolo.peso);
        System.out.println("Sabor: " + bolo.sabor);
        System.out.println("Cobertura: " + bolo.cobertura);
        
    }
}