#include "objectspawner.h"

class StairSpawner : public ObjectSpawner
{
    int stair_probability;

 public:
    StairSpawner(int stair_probability);
    ~StairSpawner();
    AbstractObject* spawn() const override;
};