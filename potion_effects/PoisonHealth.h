#ifndef POISON_HEALTH
#define POISON_HEALTH

#include "PotionEffect.h"

class PoisonHealth : public PotionEffect 
{
    int health_decrease;
    public:
        PoisonHealth();
        void usePotion(int &hp, int &atk, int &def, int max_hp);
        void removePotion(int &hp, int &atk, int &def);
};


#endif


