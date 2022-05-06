//
// Created by kolterdyx on 6/05/22.
//

#include "Vector.h"

Vector::Vector(float x, float y)
{
    this->x = x;
    this->y = y;
}

void Vector::scale(float scale)
{
    x *= scale;
    y *= scale;
}

void Vector::add(Vector* vec)
{
    x += vec->x;
    y += vec->y;
}

Vector* Vector::add(Vector* vecA, Vector *vecB)
{
    return new Vector(vecA->x + vecB->x, vecA->y + vecB->y);
}

Vector* Vector::scaled(float scale)
{
    return new Vector(x * scale, y * scale);
}

float Vector::cross(Vector* vecA, Vector* vecB)
{
    return Vector::dot(vecA, vecB);
}

float Vector::dot(Vector* vecA, Vector* vecB)
{
    return vecA->x * vecB->x + vecA->y * vecB->y;
}