
/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/

//LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
void Seguelinha(){
      // Robô alinhado (branco, preto, branco)
      if((digitalRead(IR[0]) == 1) && (digitalRead(IR[1]) == 0) && (digitalRead(IR[2]) == 1)){ 
        while (digitalRead(IR[1]) == 0){
          Serial.println("Frente");
          moverFrente(V);
          delay(20);
        }
      }

      // Sensor esquerda pegou preto (preto, preto, branco)
      if ((digitalRead(IR[0]) == 0) && (digitalRead(IR[1]) == 0) && (digitalRead(IR[2]) == 1)) {
        //Enquanto seu valor estiver ligado, ele gira para a esquerda
        while (digitalRead(IR[0]) == 0) {
          Serial.println("esquerda");
          moverDireita(V + 50);
          moverEsquerda(V);
          delay(30);
        }
      }

      // Sensor direita pegou preto (branco, preto, preto)
      if ((digitalRead(IR[0]) == 1) && (digitalRead(IR[1]) == 0) && (digitalRead(IR[2]) == 0)) {
        //Enquanto seu valor estiver ligado, ele gira para a direita
        while (digitalRead(IR[2]) == 0) {
          Serial.println("direita");
          moverEsquerda(V + 50);
          moverDireita(V);
          delay(30);
        }
      }

      // Sensor direita e esquerda pegou preto (preto, preto, preto) encruzilhada
      if ((digitalRead(IR[0]) == 0) && (digitalRead(IR[1]) == 0) && (digitalRead(IR[2]) == 0)) {
        //Quando capitar encruzilhada parar (TESTE)
        Serial.println("encruzilhada");
        parar(V);
        delay(30);
      }

}