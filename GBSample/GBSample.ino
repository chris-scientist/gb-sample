// author: chris-scientist
// created at: 25/05/2018
// updated at: 25/05/2018

#include <Gamebuino-Meta.h>

#include "CharacterController.h"
#include "CharacterModel.h"
#include "CharacterView.h"

CharacterController *mainController;

void setup() {
  // initialiser la gambuino
  gb.begin();

  // initialisation des objets
  mainController = new CharacterController(new CharacterModel(10, 5), new CharacterView());
}

void loop() {
  // boucle d'attente
  while(!gb.update());

  // effacer l'écran
  gb.display.clear();

  mainController->run();
}

