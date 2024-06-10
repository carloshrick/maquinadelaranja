
// funções de movimentação do robô que recebem "V" que vai ser velocidade

void moverDireita(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD);
  motor4.setSpeed(V-180);
  motor4.run(BACKWARD);
} 

void moverEsquerda(unsigned char V)
{
  motor3.setSpeed(V-180);
  motor3.run(FORWARD);
  motor4.setSpeed(V);
  motor4.run(BACKWARD);
} 

void moverFrente(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD);
  motor4.setSpeed(V);
  motor4.run(BACKWARD);  
} 


void moverTras(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(BACKWARD);
  motor4.setSpeed(V);
  motor4.run(FORWARD);
}

void parar(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(RELEASE);
  motor4.setSpeed(V);
  motor4.run(RELEASE);
}
