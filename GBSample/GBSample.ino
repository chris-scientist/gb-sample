// author: chris-scientist
// created at: 25/05/2018

#include <Gamebuino-Meta.h>

// position du personnage
int xCharacter;
int yCharacter;

void setup() {
  // initialiser la gambuino
  gb.begin();

  // initialisation de la position du personnage
  xCharacter = 10;
  yCharacter = 5;
}

void loop() {
  // boucle d'attente
  while(!gb.update());

  // effacer l'écran
  gb.display.clear();

  manageMove();
  paint();
}

// Gérer les déplacement
void manageMove() {
  // Note :
  // * Le test : (yCharacter > 0) permet de ne pas sortir du haut de l'écran.
  // * Le test : (xCharacter < 19) permet de ne pas sortir de la droite de l'écran.
  // * Le test : (yCharacter < 9) permet de ne pas sortir du bas de l'écran.
  // * Le test : (xCharacter > 0) permet de ne pas sortir de la gauche de l'écran.
  // Ainsi on définit les limites du personnage.
  if(gb.buttons.pressed(BUTTON_UP)) {
    if(yCharacter > 0) {
      yCharacter--;
    }
  } else if(gb.buttons.pressed(BUTTON_RIGHT)) {
    if(xCharacter < 19) {
      xCharacter++;
    }
  } else if(gb.buttons.pressed(BUTTON_DOWN)) {
    if(yCharacter < 9) {
      yCharacter++;
    }
  } else if(gb.buttons.pressed(BUTTON_LEFT)) {
    if(xCharacter > 0) {
      xCharacter--;
    }
  }
}

// Gérer l'affichage
void paint() {
  for(int y=0 ; y<=yCharacter ; y++) {
    for(int x=0; x<20 || x<xCharacter ; x++) {
      if(x == xCharacter && y == yCharacter) {
        gb.display.print("x"); // afficher le personnage
      } else {
        gb.display.print(" "); // afficher une colonne vide
      }
    }
    gb.display.println(); // passage à la ligne suivante
  }
}

