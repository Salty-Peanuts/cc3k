#include "objectspawner.h"

class StairSpawner
{
    int stair_probability;

 public:
    StairSpawner(int stair_probability);
    ~StairSpawner();
    AbstractObject* spawn() const override;
}