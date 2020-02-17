
import java.util.Scanner;


public class exCompleto {
    Scanner in = new Scanner(System.in); 
            
    public exCompleto(){
    
    }//END CONSTRUTOR
    
    public void mostrarMenu(){
        System.out.println("|----------------------------|");
        System.out.println("|     Lista de Exericios     |");
        System.out.println("|----------------------------|");
        System.out.println("|  Escolha um dos Exercicios |");
        System.out.println("|           1 a 6            |");
        System.out.println("|----------------------------|");
    }
    
    
    //QUESTAO 1
    public void ex1(){
        int i;
        for(i = 1; i <= 100; i++){
            System.out.println(i);
        }//END FOR
    }//END METODO EX1
    
    //QUESTAO 2
    public void ex2(){
        int i;
        for(i = 1; i <= 100; i++){
            if(i % 2 == 0){
                System.out.println("**");
            }//END IF
            else {
                System.out.println("*");
            }//END ELSE
        }//END FOR
    }//END METODO EX2
    
    public void ex3(){
        int i = 0;
        
        for(i = 1; i <= 100; i++){
            if(i % 5 == 0){
                System.out.println(i);
            }//END IF
            else{
                continue;
            }//END ELSE     
        }//END FOR*/
    }//END METODO EX3
    
    public void ex4(){
        System.out.printf("Informe o ano de nascimento: ");
        int anoNasc = in.nextInt();
        
        System.out.printf("Informe o ano atual: ");
        int anoAtual = in.nextInt();
       
        int calc = anoAtual - anoNasc; 
        System.out.println("Idade = " + calc);
    }//END METODO EX4
    
    public void ex5(){
        int nota1, nota2, nota3;
        float calc;
        
        System.out.printf("Informe a nota 1: ");
        nota1 = in.nextInt();

        System.out.printf("Informe a nota 2: ");
        nota2 = in.nextInt();
        
        System.out.printf("Informe a nota 3: ");
        nota3 = in.nextInt();
            
        calc = (nota1 + nota2 + nota3) / 3;
        
        if(calc >= 7){
            System.out.println("Aprovado!");
        }//END IF
        
        else if(calc >=5 && calc < 7){
            System.out.println("Recuperação!");
        }//END ELSE IF
        
        else {
            System.out.println("Reprovado!");
        }//END ELSE    
    }//END METODO EX5
    
        public void ex06(){
            int[] sexo =    new int[10];
            int[] idade =  new int[10];
            int cont_M = 0, cont_F = 0;
            
            for(int i = 0; i < 10; i++){
                System.out.printf("Informe sua idade: ");
                idade[i] = in.nextInt();

                System.out.printf("Informe seu sexo 1-Masculino 2-Feminino: ");
                sexo[i] = in.nextInt();
                
                if(sexo[i] == 1 && idade[i] >= 18){
                    cont_M++;
                }
                
                else if(sexo[i] == 2 && idade[i] >= 18){
                    cont_F++;
                }
                
                else if(sexo[i] != 1 || sexo[i] != 2){
                    System.out.println("Opção Inválida!");
                }
            }//END FOR
            
            System.out.println("Quantidade  de mulheres maiores de idade são = " + cont_F);
            System.out.println("Quantidade de homens maiores de idade são = " + cont_M);
            System.out.println("\n\n");
            
    }//END METODO EX06
}
