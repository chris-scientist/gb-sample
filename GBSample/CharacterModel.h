// author: chris-scientist
// created at: 25/05/2018
// description: le personnage

#ifndef CHARACTERMODEL
#define CHARACTERMODEL

class CharacterModel {
  private:
    // positions du joueur
    int x;
    int y;
  public:
    CharacterModel(int aX, int aY);
    const int getX() const;
    const int getY() const;
    void setX(const int aX);
    void setY(const int aY);
};

#endif

