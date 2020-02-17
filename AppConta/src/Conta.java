import java.util.Scanner;

public class Conta {
    Scanner in = new Scanner(System.in);
    
    private int numero;
    private double saldo;

    public Conta(int numero, double saldo) {
        this.numero = numero;
        this.saldo = saldo;
    }
    
    public Conta(){
        
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }
    
    public void creditar(int valor){
        this.saldo+=valor;
    }
    
    public void debitar(int valor){
        if(valor < this.saldo){
            this.saldo-=valor;
        }
    }
    
    public void transferirDe(){
        System.out.println("Informe o numero da conta: ");
        int numeroConta = in.nextInt();
        
        System.out.println("Informe o valor a ser transferido: ");
        double valorConta = in.nextDouble();
        
        if(valorConta > this.saldo){
            System.out.println("Não possui saldo para efetuar transferencia!");
        }
        
        else{
            System.out.println("Valor transferido!");
        }
        
    }
}
