#include "coordinates.hpp"


Coordinates::Coordinates(int8_t latitude_degrees, int8_t longitude_degrees, uint16_t altitude_meters):
    _latitude_degrees(latitude_degrees),
    _longitude_degrees(longitude_degrees),
    _altitude_meters(altitude_meters)
{}