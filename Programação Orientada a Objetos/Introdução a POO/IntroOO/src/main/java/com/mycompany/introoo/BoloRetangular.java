package com.mycompany.introoo;

public class BoloRetangular {
    
    // atributos: tipo nomeDoAtributo;
    float peso;
    String sabor;
    String cobertura;
 
    // métodos: tipoDoRetorno nomeDoMetodo(parâmetros){}
    void decorar(){
        System.out.println("Bolo decorado!");
    }
    
    void comer(float pesoComido){
        peso -= pesoComido; 
    }
}