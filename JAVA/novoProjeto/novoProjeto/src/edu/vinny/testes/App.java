package edu.vinny.testes;
import java.util.Scanner;
// final atua como um const do c++

public class App {

    public static void main(String [] args){



     Scanner scanner = new Scanner(System.in);


        int N = 18;
        

         if(N % 2 == 0 && N >= 2 && N <= 5 ){

            System.out.println("Not Weird");
        
        }else if(N % 2 == 0 && N >= 6 && N == 20){
        
            System.out.println("Weird");
        
        }else if(N % 2 == 0 && N > 6 && N < 20){
            System.out.println("Weird");
        }
        else if(N % 2 == 0 && N > 20){
        
            System.out.println("Not Weird");
        
        }else if (N % 2 != 0){
        
            System.out.println("Weird");
        
        }

        scanner.close();
    
}

    }

