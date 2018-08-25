// author: chris-scientist
// created at: 25/08/2018
// description: permet d'interragir avec le personnage

#ifndef CHARACTERCONTROLLER
#define CHARACTERCONTROLLER

#include <Gamebuino-Meta.h>

#include "CharacterModel.h"
#include "CharacterView.h"

class CharacterController {
  private:
     CharacterModel *character;
     CharacterView *view;
  public:
    CharacterController(CharacterModel *aCharacter, CharacterView *aView);
    void run();
};

#endif

