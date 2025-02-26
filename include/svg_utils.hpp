#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP

#include "canvas.hpp" // Include canvas.hpp to access Object and Point

// Translate an object by (tx, ty)
void translate_object(Object& obj, double tx, double ty);

// Translate a composed object (a vector of objects) by (tx, ty)
void translate_composedObject(std::vector<Object>& objects, double tx, double ty);

#endif // GEOMETRY_HPP