#ifndef SHADE
#define SHADE

#include "playercharacter.h"
#include "abstractcharacter.h"

using namespace std;

class Shade : public PlayerCharacter
{
    public:
        Shade(int x, int y);
        ~Shade();
        int attack(AbstractCharacter *receiver) override;
        string getRace() override;
};

#endif

