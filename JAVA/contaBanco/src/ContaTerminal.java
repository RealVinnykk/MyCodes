public class ContaTerminal {

String nome;
String agencia;
int numero;
double saldo;


public String verNome(){

    return nome;    
}

public String verAgencia(){

    return agencia;
}

public int verNumero(){
    return numero;
}

public void verSaldo(){
    System.out.println("seu saldo é de : " + saldo);
}

public double adicionarSaldo( double novoSaldo){
    saldo += novoSaldo;

    return saldo;
}

public double removerSaldo(double novoSaldo){
    saldo -= novoSaldo;

    return saldo;

}


}
