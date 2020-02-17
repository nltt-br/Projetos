
import java.util.Scanner;

public class appExercicios {
    public static void main(String[] args) {
       exCompleto ex = new exCompleto();
       int opc = 1;
       Scanner in = new Scanner(System.in);
       
        do{
            ex.mostrarMenu();
            System.out.printf("|:");
            int entrada = in.nextInt();
            
            switch(entrada){
                case 1:
                    ex.ex1();
                    break;
                
                case 2:
                    ex.ex2();
                    break;
                
                case 3:
                    ex.ex3();
                    break;
                
                case 4:
                    ex.ex4();
                    break;
                   
                case 5:
                    ex.ex5();
                    break;
                    
                case 6:
                    ex.ex06();
                    break;
                    
                default:
                    System.out.println("Opção Incorreta!");
                    break;
            }
        }while(opc != 0);//END DO-WHILE
       
    }//END MAIN
}//END CLASS 
