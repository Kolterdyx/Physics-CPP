//
// Created by kolterdyx on 6/05/22.
//

#ifndef PHYSICS_ENGINE_PARTICLE_H
#define PHYSICS_ENGINE_PARTICLE_H


#include "Vector.h"

class Particle {
public:
    int color;
    Vector *position;
    Vector *velocity;
    Vector *acceleration;
    int radius;

    Particle() : Particle(new Vector(0, 0), 0xffffff) {}
    Particle(Vector *position) : Particle(position, 0xffffff) {}
    Particle(int color) : Particle(new Vector(0, 0), color) {}
    Particle(Vector *position, int color);
};


#endif //PHYSICS_ENGINE_PARTICLE_H
