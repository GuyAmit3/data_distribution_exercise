#include "shape.hpp"


class Circle : public Shape
{
public:
    Circle(Color color, uint16_t size, const Coordinates& coordinates);
};
