// author: chris-scientist
// created at: 25/08/2018

#include "CharacterModel.h"

CharacterModel::CharacterModel(int aX, int aY) : x(aX), y(aY) {
  
}

const int CharacterModel::getX() const {
  return x;
}

const int CharacterModel::getY() const {
  return y;
}

void CharacterModel::setX(const int aX) {
  x = aX;
}

void CharacterModel::setY(const int aY) {
  y = aY;
}

