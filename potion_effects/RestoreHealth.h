#ifndef RESTORE_HEALTH
#define RESTORE_HEALTH

#include "PotionEffect.h"

class RestoreHealth : public PotionEffect 
{
    int health_increase;
    public:
        RestoreHealth();
        void usePotion(int &hp, int &atk, int &def, int max_hp);
        void removePotion(int &hp, int &atk, int &def);
};


#endif

