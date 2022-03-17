#include <stdio.h>
#include <stdlib.h>

int main(void) {

  const int CODE_PIN = 9417;
  const int MAX_TENTATIVE = 3;
  int saisie;
  int nb_tentative = MAX_TENTATIVE;

  do{
  // Lecture de la saisie
  printf("Veuillez entrer votre code pin: ");
  scanf("%d", &saisie);

  // Vérification du code pin
  if(saisie == CODE_PIN){
    printf("\tTélephone déverouillé\n");
    
  }
  else
    printf("\tMauvais code pin, il vous reste %d tentatives\n\n", --nb_tentative);
  
    }while((saisie != CODE_PIN) && (nb_tentative > 0));

  return 0; 
}
