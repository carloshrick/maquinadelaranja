/*

//LDR (verde)
int ldrPinEsq = 0; 
int ldrPinDir = 0; 

//valor do verde
int verdeVal = 500; 


int ldrEsq = 0; //Valor lido do LDR
int ldrDir = 0; //Valor lido do LDR

  //Verde
  pinMode(ldrPinEsq,OUTPUT); 
  pinMode(ldrPinDir,OUTPUT); 



void Verde() {
 ///ler o valor do LDR
 ldrEsq = analogRead(ldrPinEsq); 
 ldrDir = analogRead(ldrPinDir); //O valor lido será entre 0 e 1023

  // beco sem saida (dois verdes ativados)
  if ((ldrEsq > verdeVal) && (ldrDir > verdeVal)) {   
    do {// gira enquanto ele ta pegando o verde
       moverEsquerda(velocidade);
       delay(10);
    } while ((ldrEsq > verdeVal) && (ldrDir < verdeVal));
  }

  //notação verde na esquerda
  else if ((ldrEsq > verdeVal) && (ldrDir < verdeVal)) {   
    do {// gira enquanto ele ta pegando o verde
       moverEsquerda(velocidade);
       delay(10);
    } while (ldrEsq < verdeVal);
  } 

   //notação verde na direita
  else if ( (ldrEsq < verdeVal) && (ldrDir > verdeVal)) {   
        do {// gira enquanto ele ta pegando o verde
       moverEsquerda(velocidade);
       delay(10);
    } while (ldrDir < verdeVal);
  } 
 

}
*/
