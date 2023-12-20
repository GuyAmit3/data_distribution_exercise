#include "coordinates.hpp"
#include "color.hpp"
#include "shape_type.hpp"
#include "shape.hpp"


Shape::Shape(Color color, uint16_t size, const Coordinates& coordinates) :
    _type(Undefined),
    _color(color),
    _size(size),
    _coordinates(coordinates)
{}

Shape::Shape(Color color, uint16_t size, const Coordinates& coordinates, ShapeType type) :
    _type(type),
    _color(color),
    _size(size),
    _coordinates(coordinates)
{}