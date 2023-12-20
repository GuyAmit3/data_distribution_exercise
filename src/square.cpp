#include "coordinates.hpp"
#include "color.hpp"
#include "shape_type.hpp"
#include "square.hpp"


Square::Square(Color color, uint16_t size, const Coordinates& coordinates) :
    Shape(color, size, coordinates, SquareShape)
{}
