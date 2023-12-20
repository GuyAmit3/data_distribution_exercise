#include "coordinates.hpp"
#include "color.hpp"
#include "shape_type.hpp"
#include "circle.hpp"


Circle::Circle(Color color, uint16_t size, const Coordinates& coordinates) :
    Shape(color, size, coordinates, CircleShape)
{}
