#include "geometry.hpp"
#include <cmath>

// Translate an object by (tx, ty)
void translate_object(Object& obj, double tx, double ty) {
    for (auto& point : obj.points) {
        point.x += tx;
        point.y += ty;
    }
}

// Translate a composed object (a vector of objects) by (tx, ty)
void translate_composedObject(std::vector<Object>& objects, double tx, double ty) {
    for (auto& obj : objects) {
        translate_object(obj, tx, ty);
    }
}

// Scale an object by a factor of k
void scale_object(Object& obj, double k) {
    // Calculate the centroid (barycenter) of the object
    double xG = 0, yG = 0;
    for (const auto& point : obj.points) {
        xG += point.x;
        yG += point.y;
    }
    xG /= obj.points.size();
    yG /= obj.points.size();

    // Apply scaling transformation
    for (auto& point : obj.points) {
        point.x = xG + k * (point.x - xG);
        point.y = yG + k * (point.y - yG);
    }
}

// Scale a composed object (a vector of objects) by a factor of k
void scale_composedObject(std::vector<Object>& objects, double k) {
    for (auto& obj : objects) {
        scale_object(obj, k);
    }
}