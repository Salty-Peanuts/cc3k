#ifndef WOUND_ATK
#define WOUND_ATK

#include "PotionEffect.h"

class WoundAtk : public PotionEffect 
{
    int atk_decrease;
    public:
        WoundAtk();
        void usePotion(int &hp, int &atk, int &def, int max_hp);
        void removePotion(int &hp, int &atk, int &def);
};


#endif

