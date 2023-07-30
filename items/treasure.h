#ifndef TREASURE_H
#define TREASURE_H

#include "item.h"

using namespace std;

class Treasure : public Item
{
    int value;
    
 public:
    Treasure(int x, int y, int value);
    ~Treasure();
    void setValue(int value);
    bool isTraversible(AbstractObject *traveler) override;
    int getValue();
    string identify() override;
};

#endif
