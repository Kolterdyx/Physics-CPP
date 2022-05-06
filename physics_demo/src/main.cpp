#include <stdio.h>
#include "../includes/physics_engine/src/physics.h"

int main(void)
{
    printf("Yeet");
    auto *vec = new Vector(1, 2);
    auto *p = new Particle();

    delete vec;
    delete p;
    return 0;
}
