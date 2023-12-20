#pragma once

#include <cstdint>

#include "color.hpp"
#include "shape_type.hpp"
#include "coordinates.hpp"


class Shape
{
public:
    Shape(Color color, uint16_t size, const Coordinates& coordinates);

protected:
    Shape(Color color, uint16_t size, const Coordinates& coordinates, ShapeType type);

private:
    ShapeType _type;
    Color _color;
    uint16_t _size;
    Coordinates _coordinates;
};
