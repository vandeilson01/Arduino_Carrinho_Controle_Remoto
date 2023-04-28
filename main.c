// = Recebe
// == Igual
//=============================

int botao1; //variavel que guardara o 1 ou 0 do botao
int botao2;

void setup() //Inicio da programacao
{
  pinMode(13, OUTPUT); //Ativar o motor 1
  pinMode(7, OUTPUT); //Ativar o motor 2
  pinMode(2, INPUT); //Envia uma carga eletrica para o arduino
  pinMode(10, INPUT);
  
  Serial.begin(9600); //Ativa o Monitor serial
}

void loop()// Mantem a programacao rodando para sempre
{
  botao1 = digitalRead(2); //Armazena o que esta no pino 2 (0 o 1)
  botao2 = digitalRead(10);
  
  if(botao1 == 1){ //Se for verdadeiro
  digitalWrite(13, HIGH); //Liga o motor 13
  }
  
  if(botao1 == 0){ //Se for verdadeiro
  digitalWrite(13, LOW); //Liga o motor 13
  }
  
  if(botao2 == 1){ //Se for verdadeiro
  digitalWrite(7, HIGH); //Liga o motor 10
  }
  
  if(botao2 == 0){ //Se for verdadeiro
  digitalWrite(7, LOW); //Liga o motor 10
  }
  
  Serial.println(botao1); //Exibe uma informacao no Monitor serial
}
