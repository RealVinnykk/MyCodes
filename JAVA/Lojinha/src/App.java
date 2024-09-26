import java.util.ArrayList;
import java.util.Scanner;

public class App {

public static void main(String args [])throws Exception{

    Scanner scanner = new Scanner(System.in);
    
    Cliente Cliente = new Cliente();
    Lanche NovoLanche = new Lanche();

    Cliente.Saldo = 150;

    // Hamburguer

    ArrayList<String> Elementos = new ArrayList<>();
    
    
    System.out.println("Bem vindo cliente, qual seu nome ? "); 
    Cliente.Nome = scanner.nextLine(); 
        
    System.out.println("Bem vindo ao restaurante!");    

    System.out.println("vamos montar seu pedido !");

    Thread.sleep(2000);

    System.out.println("começando pelo pao, temos os seguintes tipos: ");

    for (int i = 0; i < NovoLanche.Carnes.length; i++) {
        System.out.println(i + " " + NovoLanche.Carnes[i]);
        Thread.sleep(500);
    }

    System.out.println("qual sua escolha?");
    int QCarne = scanner.nextInt();

   for(int i = 0; i < NovoLanche.Carnes.length; i++) {
    

    if(QCarne == i ){
        NovoLanche.Elementos.add(NovoLanche.Carnes[i]);
        break;
    }

   } 
 
   System.out.println("agora que voce escolheu sua carne, vamos escolher seu queijo:");

 for (int i = 0; i < NovoLanche.Queijos.length; i++) {
        System.out.println(i + " " + NovoLanche.Queijos[i]);
        Thread.sleep(500);
    }

    System.out.println("qual queijo voce quer?");
    int QQueijo = scanner.nextInt();

    for (int i = 0; i < NovoLanche.Queijos.length; i++) {
        if(QQueijo == i){
            NovoLanche.Elementos.add(NovoLanche.Queijos[i]);
            break;
            
        }
    }


    System.out.println("Qual tipo de pao voce quer");
    for (int i = 0; i < NovoLanche.Pao.length; i++) {
        System.out.println(i + " " + NovoLanche.Pao[i]);
        Thread.sleep(500);
    }

    int QPao = scanner.nextInt();

    scanner.nextLine();

    for (int i = 0; i < NovoLanche.Pao.length; i++) {
        if(QPao == i ){
            NovoLanche.Elementos.add(NovoLanche.Pao[i]);
        }
    }
        

    System.out.println("voce quer salada?");
    String QSalada = scanner.nextLine();
    String QSaladaMaiusculo = QSalada.toUpperCase();
    
    QSalada = null;
    System.gc();

    if (QSaladaMaiusculo.equals("SIM")) {
        NovoLanche.Elementos.addLast("Salada");
    }

    System.out.println("Mostrando seu lanche: ");
    for (int i = 0; i < NovoLanche.Elementos.size(); i++) {
        System.out.println(NovoLanche.Elementos.get(i));
        Thread.sleep(500);
    }

    scanner.close();
}



}
