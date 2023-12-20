#include "shape.hpp"


class Square : public Shape
{
public:
    Square(Color color, uint16_t size, const Coordinates& coordinates);
};
