#include "geometricobject.hpp"

int GeometricObject::numberOfGeometricObjects = 0;

GeometricObject::GeometricObject()
{
    clr[0] = 1.0;
    clr[1] = 0.0;
    clr[2] = 0.0;
    numberOfGeometricObjects++;
}

GeometricObject::~GeometricObject()
{
    numberOfGeometricObjects--;
}

int GeometricObject::getNumberOfObjects()
{
    return numberOfGeometricObjects;
}

int GeometricObject::getListIndex()
{
    return mListIndex;
}

void GeometricObject::setClr(double* __clr)
{
    clr[0] = __clr[0];
    clr[1] = __clr[1];
    clr[2] = __clr[2];
}
