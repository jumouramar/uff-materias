/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.primeiroprojetooo;

/**
 *
 * @author juliana
 */
public class Ex6 {
    public static void main(String[] args) {
        int fb0 = 0;
        int fb1 = 1;
        
        do{
            System.out.println(fb0);
            System.out.println(fb1);
            
            fb0 = fb1 + fb0;
            fb1 = fb0 + fb1;
            
        } while(fb0 <= 144);
    }
}
