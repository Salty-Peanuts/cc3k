#ifndef DWARF_H
#define DWARF_H

#include "NPC.h"

using namespace std;

class Dwarf : public NPC
{
    public:
        Dwarf(int x, int y);
        int attack(AbstractCharacter* receiver) override;
        string getRace() override;
};


#endif

