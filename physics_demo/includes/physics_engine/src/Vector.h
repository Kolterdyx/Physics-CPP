//
// Created by kolterdyx on 6/05/22.
//

#ifndef PHYSICS_ENGINE_VECTOR_H
#define PHYSICS_ENGINE_VECTOR_H


class Vector{

private:
    float x;
    float y;

public:
    Vector(float x, float y);
    void scale(float scale);
    void add(Vector* vec);
    static Vector* add(Vector* vecA, Vector *vecB);
    Vector* scaled(float scale);
    static float cross(Vector* vecA, Vector* vecB);
    static float dot(Vector* vecA, Vector* vecB);
};


#endif //PHYSICS_ENGINE_VECTOR_H
