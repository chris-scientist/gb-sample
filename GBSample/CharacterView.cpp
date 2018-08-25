// author: chris-scientist
// created at: 25/08/2018

#include "CharacterView.h"

void CharacterView::paint(const int xCharacter, const int yCharacter) {
  for(int yPos=0 ; yPos<=yCharacter ; yPos++) {
    for(int xPos=0; xPos<20 || xPos<xCharacter ; xPos++) {
      if(xPos == xCharacter && yPos == yCharacter) {
        gb.display.print("x"); // afficher le personnage
      } else {
        gb.display.print(" "); // afficher une colonne vide
      }
    }
    gb.display.println(); // passage à la ligne suivante
  }
}

