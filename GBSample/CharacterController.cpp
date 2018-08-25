// author: chris-scientist
// created at: 25/05/2018

#include "CharacterController.h"

CharacterController::CharacterController(CharacterModel *aCharacter, CharacterView *aView) : character(aCharacter), view(aView) {
  
}

void CharacterController::run() {
  // Note :
  // * Le test : (yCharacter > 0) permet de ne pas sortir du haut de l'écran.
  // * Le test : (xCharacter < 19) permet de ne pas sortir de la droite de l'écran.
  // * Le test : (yCharacter < 9) permet de ne pas sortir du bas de l'écran.
  // * Le test : (xCharacter > 0) permet de ne pas sortir de la gauche de l'écran.
  // Ainsi on définit les limites du personnage.
  
  // Gestion des déplacement
  int yCharacter = character->getY();
  int xCharacter = character->getX();
  if(gb.buttons.pressed(BUTTON_UP)) {
    if(yCharacter > 0) {
      character->setY(--yCharacter);
    }
  } else if(gb.buttons.pressed(BUTTON_RIGHT)) {
    if(xCharacter < 19) {
      character->setX(++xCharacter);
    }
  } else if(gb.buttons.pressed(BUTTON_DOWN)) {
    if(yCharacter < 9) {
      character->setY(++yCharacter);
    }
  } else if(gb.buttons.pressed(BUTTON_LEFT)) {
    if(xCharacter > 0) {
      character->setX(--xCharacter);
    }
  }

  // Gestion de l'affichage déléguée à la vue
  view->paint(character->getX(), character->getY());
}

