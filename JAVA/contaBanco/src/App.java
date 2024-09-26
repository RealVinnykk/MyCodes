
import java.util.Scanner;

public class App {

    public static void main(String[] args) throws Exception {

        Scanner scanner = new Scanner(System.in);

        ContaTerminal ContaBancaria = new ContaTerminal();

        System.out.println("Informe seu nome : ");
        ContaBancaria.nome = scanner.nextLine();

        System.out.println("Informe o numero da sua agencia : ");
        ContaBancaria.agencia = scanner.nextLine();

        System.out.println("Informe o numero da sua conta :");
        ContaBancaria.numero = scanner.nextInt();

        scanner.nextLine();

        Thread.sleep(1500);

        System.out.println("sua conta de numero [ " + ContaBancaria.numero + " ], agencia [ " + ContaBancaria.agencia + " ] e saldo disponivel de [ " + ContaBancaria.saldo + " ] foi criada com sucesso! ");

        boolean quer = false;

        System.out.println("voce deseja adicionar saldo?:");
        String querAdicionar = scanner.nextLine();

        if (querAdicionar.equalsIgnoreCase("sim")) {
            quer = true;
        }

        if (quer == true) {

            System.out.println("quanto voce deseja adicionar na sua conta?: ");
            int quantidade = scanner.nextInt();

            ContaBancaria.adicionarSaldo(quantidade);

            ContaBancaria.verSaldo();

        }

        System.out.println("saindo...");
        scanner.close();
    }

}
