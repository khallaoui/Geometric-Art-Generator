#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP

#include "canvas.hpp"

// Function declarations
void translate_object(Object& obj, double tx, double ty);
void translate_composedObject(std::vector<Object>& objects, double tx, double ty);
void scale_object(Object& obj, double k);
void scale_composedObject(std::vector<Object>& objects, double k);
void rotate_object(Object& obj, double angle, Point center);
void rotate_composedObject(std::vector<Object>& objects, double angle, Point center);

#endif // GEOMETRY_HPP