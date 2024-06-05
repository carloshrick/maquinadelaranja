void Seguelinha()
{

//mecanismo para dar prioridade ao Verde em vez do segue linha. Se pega o verde o segue linha para
if((ldrEsq < 500) || (ldrDir < 500)){
    
  //LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA

  // branco nas extremidades, siga em frente
  if ((direitaSL == 0) && (esquerdaSL == 0)) {   
    moverFrente(velocidade);
    delay(10);
  }

  // errro de alta correção na esquerda
  else if ( (direitaSL == 0) && (centroSL == 1) && (esquerdaSL == 1)) {   
    moverDireita(velocidade * K);
    delay(10);
  }

   // errro de baixa correção na esquerda
  else if ((direitaSL == 0) && (centroSL == 0) && (esquerdaSL == 1)) {   
    moverDireita(velocidade * k);
    delay(10);
  }

    // errro de alta correção na direita
  else if ((direitaSL == 1) && (centroSL == 1) && (esquerdaSL == 0)) {   
    moverEsquerda(velocidade * K);
    delay(10);
  }

   // errro de baixa correção na direita
  else if ((direitaSL == 1) && (centroSL == 0) && (esquerdaSL == 0)) {   
    moverEsquerda(velocidade * k);
    delay(10);
  }
}

}
