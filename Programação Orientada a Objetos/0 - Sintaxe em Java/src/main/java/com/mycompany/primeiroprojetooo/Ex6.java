package com.mycompany.primeiroprojetooo;

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