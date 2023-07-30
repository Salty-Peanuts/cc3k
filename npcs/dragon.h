#ifndef DRAGON_H
#define DRAGON_H

#include "NPC.h"
#include "dragonhoard.h"

using namespace std;

class Dragon : public NPC
{
    DragonHoard *dragon_hoard;

    public:
        Dragon(int x, int y, DragonHoard *dragon_hoard);
        int attack(AbstractCharacter* receiver) override;
        string getRace() override;
};




#endif

