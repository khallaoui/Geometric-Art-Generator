#ifndef CANVAS_HPP
#define CANVAS_HPP

#include <vector>
#include <string>

struct Point {
    double x, y;
};

struct Object {
    std::vector<Point> points;
    std::string color;
};

struct Canvas {
    int width, height;
    std::vector<Object> baseObject;  // Changed to vector for complex objects
    int rows, cols;
};

void translate_object(Object& obj, double tx, double ty);
void translate_composedObject(std::vector<Object>& objects, double tx, double ty);
std::string canvas_composed_to_svg(const Canvas& canvas);
std::string canvas_transform_composed_to_svg(const Canvas& canvas, const std::vector<std::pair<std::string, double>>& transforms);

#endif // CANVAS_HPP