
//Arquivo principal que chama funções e adiciona bibliotecas

#include <AFMotor.h>//biblioteca de motores

//motores
AF_DCMotor motor3(3); //Seleção do Motor 1
AF_DCMotor motor4(1); //Seleção do Motor 2

//segue linha
#define pin0 51 //Direita
#define pin1 47 //Esquerda
#define pin2 52 //Centro

int centroSL = digitalRead(pin0);
int direitaSL = digitalRead(pin2);
int esquerdaSL = digitalRead(pin2);

int K = 0.5; //alta correção
int k = 0.3; //baixa correção
  
int velocidade = 150; //regulador de velocidade geral

//LDR (verde)
int ldrPinEsq = 0; 
int ldrPinDir = 0; 

//valor do verde
int verdeVal = 500; 


int ldrEsq = 0; //Valor lido do LDR
int ldrDir = 0; //Valor lido do LDR

 

void setup(){

  //Segue linha
  pinMode(pin0, INPUT);       
  pinMode(pin1, INPUT);      
  pinMode(pin2, INPUT);      

  //Setup Serial Monitor
  Serial.begin(9600); 

  //Verde
  pinMode(ldrPinEsq,OUTPUT); 
  pinMode(ldrPinDir,OUTPUT); 

}


void loop() {
  
  Seguelinha();
  Verde();
     
}
