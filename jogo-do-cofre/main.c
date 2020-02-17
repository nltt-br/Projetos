#include <LiquidCrystal.h> //Inclui a biblioteca do LCD


//vetor de caractere

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//vetor que vai armazenar a senha correta
int senha[] = {0, 0, 0, 0};

//vetor que vai comparar com os botoes que o usuario pressionou
int comp [] = {0, 0 ,0 ,0};
int buffer[4], buffer2[4];

int buttons[] = {10, 6, 7, 8, 9}; //vetor com os botoes do codigo

int i, cont, chances;

void setup() {
    for(int j = 0; j < 5; j++){
      pinMode(buttons[j], INPUT);
    }//END FOR

  	//configuração de portal serial
    Serial.begin(9600);
    lcd.begin(16, 2); //Inicia o LCD com dimensões 16x2(Colunas x Linhas)

  	//function com msgs do display


}

void loop(){
  	msg();
  	cadastroSenha();
  	jogo();
  	delay(1000);
  	lcd.clear();
  	msg();
  	cadastroSenha();
  	jogo();
  	delay(1000);
  	lcd.clear();
}//END FUNCTION LOOP()



void jogo(){
	chances = 1;

    do{
    	cadastroJogador();

        if((senha[0] == comp[0]) & (senha[1] == comp[1]) & (senha[2] == comp[2]) & (senha[3] == comp[3])){
          break;

        }//END IF

        else{
            lcd.print("Senha Incorreta");
          	delay(500);
         	lcd.clear();
          	chances++;
    	}//END ELSE

  }while(chances < 6);//END DO-WHILE

  switch(chances){

    case 1:
      lcd.setCursor(2,0);
      lcd.print("Voce ganhou");
      lcd.setCursor(3,3);
      lcd.print("10 Pontos");
      break;

    case 2:
      lcd.setCursor(2,0);
      lcd.print("Voce ganhou");
      lcd.setCursor(3,3);
      lcd.print("8 Pontos");
      break;

    case 3:
      lcd.setCursor(2,0);
      lcd.print("Voce ganhou");
      lcd.setCursor(3,3);
      lcd.print("6 Pontos");
      break;

    case 4:
      lcd.setCursor(2,0);
      lcd.print("Voce ganhou");
      lcd.setCursor(3,3);
      lcd.print("4 Pontos");
      break;

    case 5:
      lcd.setCursor(2,0);
      lcd.print("Voce ganhou");
      lcd.setCursor(3,3);
      lcd.print("2 Pontos");
      break;

    case 6:
        lcd.setCursor(2,0);
    	lcd.print("Voce Falhou, FIM");
  }//END SWITCH
}//END FUNCTION


//MOSTRA MSG NO DISPLAY DO ARDUINO, NO INICIO DO LOOP
void msg(){
    lcd.setCursor(4, 0);
    lcd.print("PROJETO");
  	lcd.setCursor(4,4);
  	lcd.print("ARDUINO!");
  	delay(2000);
  	lcd.clear();

    lcd.setCursor(3, 0);
    lcd.print("Turma SI");
  	lcd.setCursor(2,2);
  	lcd.print("FJNP 2016.2");
    delay(2000);
    lcd.clear();

  	lcd.setCursor(4,0);
  	lcd.print("Grupo:");
  	delay(2000);
  	lcd.clear();

  	lcd.setCursor(3,0);
  	lcd.print("Anderson C.");
  	lcd.setCursor(3,3);
  	lcd.print("Jefferson F.");
  	delay(2000);
  	lcd.clear();

  	lcd.setCursor(5,0);
  	lcd.print("Lucas W.");
  	lcd.setCursor(5,5);
  	lcd.print("Jorge D.");
  	delay(2000);
  	lcd.clear();

    //mensagem no display 2s // Jogo do cofre
    lcd.setCursor(2, 0);
    lcd.print("Jogo do Cofre");
    delay(2000);
    lcd.clear();
    delay(1000);
}


//FUNCTION RESPONSAVEL PELO CADASTRO DA SENHA DO JOGADOR
void cadastroJogador(){
  i = 0, cont = 1;
  lcd.setCursor(4,0);
  lcd.print("Informe a");
  lcd.setCursor(6,6);
  lcd.print("Senha");

  do{
    if(digitalRead(buttons[0]) == HIGH){
      comp[i] = 1;
	  cont++;
      i++;
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("1");
      delay(500);
      lcd.clear();

    }//END IF
    if(digitalRead(buttons[1]) == HIGH){
      comp[i] = 2;
	  cont++;
      i++;
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("2");
      delay(500);
      lcd.clear();

    }//END IF
    if(digitalRead(buttons[2]) == HIGH){
      comp[i] = 3;
	  cont++;
      i++;
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("3");
      delay(500);
      lcd.clear();

    }//END IF
    if(digitalRead(buttons[3]) == HIGH){
      comp[i] = 4;
	  cont++;
      i++;
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("4");
      delay(500);
      lcd.clear();
    }//END IF

    if(digitalRead(buttons[4]) == HIGH){
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("5 INVALIDO!");
      delay(500);
      lcd.clear();
    }//END IF
  } while(cont < 5);//END DO-WHILE

  	lcd.clear();
    lcd.setCursor(6,0);
    lcd.print(senha[0]);
    lcd.print(senha[1]);
    lcd.print(senha[2]);
    lcd.print(senha[3]);
  	delay(3000);

  	lcd.clear();
  	lcd.setCursor(2,0);
  	lcd.print("Deseja Salvar");

  	lcd.setCursor(2,2);
    lcd.print("Pressione 5!");
  	delay(2000);

  	do{}while(digitalRead(buttons[4]) != HIGH);

  	lcd.clear();
  	lcd.setCursor(2,2);
  	lcd.print("Senha Salva!");
  	delay(1000);
  	lcd.clear();
}



//FUNCTION RESPONSAVEL PELO CADASTRO DA CHAVE PRA DESBLOQUEAR O COFRE
void cadastroSenha(){
  i = 0, cont = 1;
  lcd.setCursor(4,0);
  lcd.print("Informe a ");
  lcd.setCursor(6,6);
  lcd.print("Chave!");
  delay(1000);

  do{
    if(digitalRead(buttons[0]) == HIGH){
      senha[i] = 1;
	  cont++;
      i++;
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("1");
      delay(500);
      lcd.clear();

    }//END IF
    if(digitalRead(buttons[1]) == HIGH){
      senha[i] = 2;
	  cont++;
      i++;
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("2");
      delay(500);
      lcd.clear();

    }//END IF
    if(digitalRead(buttons[2]) == HIGH){
      senha[i] = 3;
	  cont++;
      i++;
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("3");
      delay(500);
      lcd.clear();

    }//END IF
    if(digitalRead(buttons[3]) == HIGH){
      senha[i] = 4;
	  cont++;
      i++;
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("4");
      delay(500);
      lcd.clear();
    }//END IF

    if(digitalRead(buttons[4]) == HIGH){
      lcd.clear();
      lcd.setCursor(8,0);
      lcd.print("5 INVALIDO!");
      delay(500);
      lcd.clear();
    }//END IF
  } while(cont < 5);//END DO-WHILE

  	lcd.clear();
    lcd.setCursor(6,0);
    lcd.print(senha[0]);
    lcd.print(senha[1]);
    lcd.print(senha[2]);
    lcd.print(senha[3]);
  	delay(3000);

    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("Deseja salvar");
    lcd.setCursor(2,4);
    lcd.print("Pressione 5!");
  	delay(1000);

  	do{}while(digitalRead(buttons[4]) != HIGH);

  	lcd.clear();
  	lcd.setCursor(2,2);
  	lcd.print("Senha Salva!");
  	delay(1000);
  	lcd.clear();
}//END FUNCTION
